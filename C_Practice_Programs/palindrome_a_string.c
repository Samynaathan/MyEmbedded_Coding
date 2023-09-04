#include <stdio.h>
#include "common_header.h"

int main()
{
    char s[50];
    int n=0;
    printf("Enter the string \n");
    scanf("%s",s);
    while(s[n]!='\0')
    {
        n++;
    }
    int ispalindrome = 1;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            ispalindrome=0;
            break;
        }
    }
    if(ispalindrome)
     printf("Entered string is palindrome\n ");
     else
     printf("Entered string is not a palindrome\n");
}