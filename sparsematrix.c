#include<stdio.h>
struct sparse{
    int row;
    int col;
    int value;
};
int main(){
    int m,n;
    printf("Enter the dimension of matrix : ");
    scanf("%d %d",&m,&n);
    int arr1[m][n];
    int num1=0;
    printf("Enter the First matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
            if(arr1[i][j]){
                num1++;
            }
        }
    }
    printf("Enter the second matrix\n");
    int arr2[m][n];
    int num2=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
            if(arr2[i][j]){
                num2++;
            }
        }
    }
    struct sparse s1[num1+1];
    int k1=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i][j]){
              s1[k1].row=i;
              s1[k1].col=j;
              s1[k1].value=arr1[i][j];
              k1++;
            }
        }
    }
    s1[0].row=m;s1[0].col=n;s1[0].value=num1;
    printf("The sparse matrix of Arr1 is \n");
    for(int i=0;i<num1+1;i++){
        printf("%d %d %d\n",s1[i].row,s1[i].col,s1[i].value);
    }
    struct sparse s2[num2+1];
    int k2=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr2[i][j]){
              s2[k2].row=i;
              s2[k2].col=j;
              s2[k2].value=arr2[i][j];
              k2++;
            }
        }
    }
    s2[0].row=m;s2[0].col=n;s2[0].value=num2;
    printf("The sparse matrix of Arr2 is \n");
    for(int i=0;i<num2+1;i++){
        printf("%d %d %d\n",s2[i].row,s2[i].col,s2[i].value);
    }
    struct sparse s3[num1+num2+1];
    int i=1;int j=1;int k=1;int equal=0;
    while(i<=s1[0].value && j<=s2[0].value){
        while(s1[i].row<s2[j].row || ( s1[i].row==s2[j].row && s1[i].col<s2[j].col ) ){
            s3[k].row=s1[i].row;
            s3[k].col=s1[i].col;
            s3[k].value=s1[i].value;
            i++;k++;
        }
        while(s1[i].row>s1[j].row || ( s1[i].row==s2[j].row && s1[i].col>s2[j].col )){
            s3[k].row=s2[j].row;
            s3[k].col=s2[j].col;
            s3[k].value=s2[j].value;
            j++;k++;
        }
        while(s1[i].row==s2[j].row && s1[i].col==s2[j].col){
            s3[k].row=s2[j].row;
            s3[k].col=s2[j].col;
            s3[k].value= s1[i].value + s2[j].value;
            equal++;i++;k++;j++;
        }
    }
    if(i<s1[0].value){
        while(i!=(s1[0].value + 1)){
            s3[k].row=s1[i].row;
            s3[k].col=s1[i].col;
            s3[k].value=s1[i].value;
            i++;
        }
        while(j!=(s2[0].value + 1)){
            s3[k].row=s1[j].row;
            s3[k].col=s1[j].col;
            s3[k].value=s1[j].value;
            j++;
        }
    }
    s3[0].row=m;s3[0].col=n;s3[0].value=k-equal;
    printf("Printing second sparse matrix \n");
    for(int i=0;i<s3[0].value+1;i++){
        printf("%d %d %d\n",s3[i].row,s3[i].col,s3[i].value);
    }
    return 0;
}