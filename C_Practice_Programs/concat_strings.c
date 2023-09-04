#include "common_header.h"
int main()
{
    char s1[50];
    char s2[50];
    char s3[50];
    printf("Enter the two strings\n");
    
     scanf("%s",s1);
     scanf("%s",s2);
    strcat(s1,s2);
    printf("%s\n",s1);
    return 0;

}