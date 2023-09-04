#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("file1.txt","r");
    if(fp=NULL)
    {
        printf("Error! File doesn't exist\n");
        return 1;
    }
    char ch;
    while(!EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}