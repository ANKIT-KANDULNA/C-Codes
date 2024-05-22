#include <stdio.h>
int main() 
{
    FILE *file;
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s",filename);
    file=fopen(filename,"rb");
    fseek(file,0,SEEK_END);
    long size=ftell(file);
    fclose(file);
    printf("Size of the file '%s' is %ld bytes.\n",filename,size);
    return 0;
}