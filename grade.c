#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks[0-100]:");
    scanf("%d",&marks);
    
    if (marks>90 && marks<=100)
    {
        printf("A1");
    }
    else if (marks>80 && marks<=90)
    {
        printf("A2");
    }
    else if (marks>70 && marks<=80)
    {
        printf("B1");
    }
    else if (marks>60 && marks<=70)
    {
        printf("B2");
    }
    else if (marks>50 && marks<=60)
    {
        printf("C1");
    }
    else if (marks>40 && marks<=50)
    {
        printf("C2");
    }
    else if (marks>30 && marks<=40)
    {
        printf("D");
    }
    else if (marks>+0 && marks<=30)
    {
        printf("E");
    }
    else
    {
        printf("Wrong Marks!!");
    }
    return 0;
}