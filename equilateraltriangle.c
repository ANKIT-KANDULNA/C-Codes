#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter 1st side of Triangle:");
    scanf("%d",&x);
    printf("Enter 2st side of Triangle:");
    scanf("%d",&y);
    printf("Enter 3st side of Triangle:");
    scanf("%d",&z);
    int a,b,c;
    printf("Enter the angle between %d and %d :",x,y);
    scanf("%d",&a);
    printf("Enter the angle between %d and %d :",y,z);
    scanf("%d",&b);
    printf("Enter the angle between %d and %d :",x,z);
    scanf("%d",&c);
    if((a+b+c)==180){
        if((x==y)&&(x==z)&&(y==z)&&(a==b)&&(b==c)&&(a==c)){
            printf("It is an Equilateral Triangle.");
        }
        else{
            printf("Not an Equilateral Triangle.");
        }
    }
    else{
        printf("Angle sum property not obeyed.");
    }
    return 0;
}