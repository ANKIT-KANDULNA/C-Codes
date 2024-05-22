#include <stdio.h>
int pacrst(int r,int x,int y,int s,int h,int b,int s1,int s2,int s3);
int main()
{
    int r,x,y,s,s1,s2,s3,h,b;
    printf("Enter radius of CIRCLE:");
    scanf("%d",&r);
    printf("Enter length of RECTANGLE:");
    scanf("%d",&x);
    printf("Enter breadth of RECTANGLE:");
    scanf("%d",&y);
    printf("Enter side of SQUARE:");
    scanf("%d",&s);
    printf("Enter 1st side of TRIANGLE:");
    scanf("%d",&s1);
    printf("Enter 2nd side of TRIANGLE:");
    scanf("%d",&s2);
    printf("Enter 3rd side of TRIANGLE:");
    scanf("%d",&s3);
    printf("Enter Height of TRIANGLE:");
    scanf("%d",&h);
    printf("Enter Base of TRIANGLE:");
    scanf("%d",&b);
    pacrst(r,x,y,s,h,b,s1,s2,s3);
    return 0;
}
int pacrst(int r,int x,int y,int s,int h,int b,int s1,int s2,int s3)
{
    printf("Area of CIRCLE is:%f\nPerimeter of CIRCLE is:%f\n",3.14*r*r,2*3.14*r);
    printf("Area of RECTANGLE is:%d\nPerimeter of RECTANGLE is:%d\n",x*y,2*(x+y));
    printf("Area of SQUARE is:%d\nPerimeter of SQUARE is:%d\n",s*s,4*s);
    printf("Area of TRIANGLE is:%f\nPerimeter of TRIANGLE is:%d\n",0.5*h*b,s1+s2+s3);
    return 0;
}