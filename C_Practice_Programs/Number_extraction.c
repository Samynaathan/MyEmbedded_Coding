/* Extract Digits from the number

Implement a program to extract digits from the given number

input -------------> a number from the user
constraint --------> n>0
output ------------> print digits in line sep by space

Sum of Digits 

Implement a program to calculate sum of digits present in the given number

input -------------> a number from the user
constraint --------> n>0
output ------------> print sum of digits
 */

#include "common_header.h"
int main()
{
    int num,sum=0,count=0;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("Digits are ");
    while(num>0)
    { 
        int digit = num%10;
        printf("%d ", digit);
        sum=sum+digit;
        num=num/10;
        count++;
    }
    printf("\n");
    printf("Sum of digits %d ",sum);
    printf("\n");
    printf("No of digits are %d ",count);
    return 0;
}