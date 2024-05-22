#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[30];
    int marks[3];
    int tmarks;
}student;
int main()
{
    student std[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter name:");
        fgets(std[i].name,30,stdin);
        printf("Enter marks in three subjects:");
        scanf("%d\n%d\n%d",&std[i].marks[0],&std[i].marks[1],&std[i].marks[2]);
        std[i].tmarks=std[i].marks[0]+std[i].marks[1]+std[i].marks[2];
        while(getchar()!='\n');
    }
    printf("\nStudent Details:\n");
    for(int i=0;i<3;i++)
    {
        printf("Name:%s",std[i].name);
        printf("Total marks:%d\n",std[i].tmarks);
    }
    return 0;
}