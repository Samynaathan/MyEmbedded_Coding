/* LBP22
~~~~~
Niven Number

Write a program to accept a number and check and display whether it is a Niven Number or not.
Niven Number is that a number which is divisible by its sum of digits.

input -----> a number
constraint-> n>0
output ----> Niven Number or Not */

#include "common_header.h"
int main()
{
    int n;
    int sum =0;
    printf("Enter the number\n");
    scanf("%d",&n);
    char str_digits[20];
    snprintf(str_digits,sizeof(str_digits),"%d",n);
    int digits=0;
    while(str_digits[digits]!='\0')
    {
        digits++;
    }
    int num_digits[20];
    for(int i=0;i<digits;i++)
    {
        num_digits[i]=str_digits[i]-'0';
    }
    for(int i=0;i<digits;i++)
    {
        printf("%d ",num_digits[i]);
        sum=sum+num_digits[i];
    }
    printf("\n");
    if(n%sum==0)
    {
        printf("The given number %d is NIVEN NUMBER\n",n);
    }
    else
    {
       printf("The given number %d is not NIVEN NUMBER\n",n);
    }
    return 0;
}