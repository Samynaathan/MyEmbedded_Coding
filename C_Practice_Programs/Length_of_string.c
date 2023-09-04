#include "common_header.h"
int main()
{
    int i;
    char s[50];
    int count=0;
    printf("\nEnter the string: ");
   scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of the given string is %d\n",count);
}   