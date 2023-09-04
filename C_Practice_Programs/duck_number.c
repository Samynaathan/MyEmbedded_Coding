
/*Duck Number

Program to read a number and check whether it is duck number or not.

A duck number is a number which has zeros present in it, but no zero present in the begining of the number.

input-------> a number from the user
contraint --> n>=0
output------> Yes or No#include "common_header.h" */

#include<stdio.h>
#include "common_header.h"
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    while(n>0)
    {
    int digit = n%10;
    if(digit==0)
    {
        printf("It is a duck number\n");
        exit(1);
    }
    n=n/10;
    }
    printf("It is not a Duck number\n");

}

