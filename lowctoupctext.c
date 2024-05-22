#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *inputFile,*outputFile;
    char inputFileName[50],outputFileName[50];
    char ch;
    printf("Enter the input file name:");
    scanf("%s",inputFileName);
    printf("Enter the output file name:");
    scanf("%s",outputFileName);
    inputFile=fopen(inputFileName,"r");
    outputFile=fopen(outputFileName,"w");
    while((ch=fgetc(inputFile))!=EOF) 
    {
        if(islower(ch)) 
        {
            ch=toupper(ch); 
        }
        fputc(ch,outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    printf("File content converted to uppercase and written to another file.\n");
    return 0;
}