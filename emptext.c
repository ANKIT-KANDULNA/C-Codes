#include <stdio.h>
int main() 
{
    FILE *file;
    char name[50];
    int age;
    float salary;
    file=fopen("emp.txt","w");
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter salary:");
    scanf("%f",&salary);
    fprintf(file,"Name: %s\n",name);
    fprintf(file,"Age: %d\n",age);
    fprintf(file,"Salary: %.2f\n",salary);
    fclose(file);
    printf("Employee information has been stored in emp.txt.\n");
    return 0;
}