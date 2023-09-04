/* LBP30
~~~~~~
Valid Palindrome

Given a string, determine if it is a Palindrome string or not. 
A String is Palindrome if it is equal to reverse of the original string.

input ------> A String from the user
constriant--> Non-empty String
output -----> Palindrome or not


abc -----> Not Pali
aba -----> Pali
nayan ---> Pali
madam ---> pali
anna ----> pali
nitin ---> pali
radar ---> pali
level ---> pali
vobov ---> pali
malayalam -> pali
 */
#include "common_header.h"
int main()
{
    char s[50];
    int size=0;
    int flag=0;
    scanf("%s",s);
    while(s[size]!='\0')
    {
        size++;
    }
    for(int i=0;i<size/2;i++)
    {
        if(s[i]!=s[size-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Entered string is palindrome\n");
    else
    printf("Entered string is not a palindrome\n");
    return 0;
}