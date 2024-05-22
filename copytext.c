#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *sourceFile,*destinationFile;
    char sourceFileName[50],destinationFileName[50];
    char ch;
    printf("Enter the source file name:");
    scanf("%s",sourceFileName);
    printf("Enter the destination file name:");
    scanf("%s",destinationFileName);
    sourceFile=fopen(sourceFileName,"r");
    destinationFile=fopen(destinationFileName,"w");
    while((ch=fgetc(sourceFile))!=EOF) 
    {
        fputc(ch,destinationFile);
    }
    fclose(sourceFile);
    fclose(destinationFile);
    printf("File contents copied successfully.\n");
    return 0;
}