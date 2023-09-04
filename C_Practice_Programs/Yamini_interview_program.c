#include "common_header.h"
int main()
{
    char str[50];
    printf("Enter the string\n");
    gets(str);
    int s[256]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        s[str[i]]++;
    }
    int maxfreq=0;
    char maxchar;
    for(int i=0;i<256;i++)
    {
        if(s[i]>maxfreq)
        {
            maxfreq=s[i];
            maxchar=(char)i;
        }
    }
    printf("The max repetive of the string %s is %c with %d occurences",str,maxchar,maxfreq);
    return 0;
    }