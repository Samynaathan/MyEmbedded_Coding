/* Sum of odd Digits 

Implement a program to calculate sum of odd digits present in the given number

input -------------> a number from the user
constraint --------> n>0
output ------------> print sum of odd digits */

#include "common_header.h"
int main()
{
    int num,sum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("Digits are ");
    while(num>0)
    { 
        int digit = num%10;
        printf("%d ", digit);
        num=num/10;
        if(digit%2!=0){
            sum=sum+digit;
        }
    }
    printf("\n");
    printf("sum of odd digits are %d ",sum);
}