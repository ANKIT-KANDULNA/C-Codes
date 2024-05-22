#include <stdio.h>
int pcm(int p,int c,int m);
int main()
{
    int x,y,z;
    printf("Enter marks in PHYSICS:");
    scanf("%d",&x);
    printf("Enter marks in CHEMISTRY:");
    scanf("%d",&y);
    printf("Enter marks in MATHS:");
    scanf("%d",&z);
    printf("Percentage in PCM is:%d",pcm(x,y,z));
    return 0;
}
int pcm(int p,int c,int m)
{
    return ((p+c+m)/3);
}