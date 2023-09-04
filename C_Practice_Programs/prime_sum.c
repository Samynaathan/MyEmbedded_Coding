/* Sum of prime Digits 

Implement a program to calculate sum of prime digits present in the given number

input -------------> a number from the user
constraint --------> n>0
output ------------> print sum of prime digits */

#include <stdio.h>
#include "common_header.h"

int main()
{
    int n,r,sum=0,i,j;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The prime numners are \n");
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
             break;
        }
        if(i==j)
        {
        printf("%d ",i);
        sum=sum+i;
        }
    }
    printf("\n");
    printf("The sum of prime numbers are %d\n",sum);
}
    