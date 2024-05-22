#include <stdio.h>
void printMatrix(int m,int n, int smatrix[][n]){
    int k=0,l=0;
    while(k<m){
        while(l<n){
            printf("%d ", smatrix[k][l]);
            l++;
        }
        printf("\n");
        k++;
    }
}
int main()
{
    int m,n;
    scanf("%d %d",m,n);
    int smatrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&smatrix[i][j]);
        }
    }
    printMatrix(m,n,smatrix);
    return 0;
}