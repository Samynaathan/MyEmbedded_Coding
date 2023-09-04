/* LBP23
~~~~~
A Special two digit number
A special two digit number is a number such that when the sum of its digits is
added to the product of its digits, the result should be equal to the original two-digit number.

Implement a program to accept a two digit number and check whether it is a special two digit number or not.

input -----> a two digit number
constraint-> 10<=n<=99
output ----> special two digit number or not  Special two-digit numbers:
14
19
29
47*/

#include "common_header.h"
#define N 3
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    char str_number[N];
    snprintf(str_number,sizeof(str_number),"%d",n);
    int num_digits[N];
    for(int i=0;i<N-1;i++)
    {
        num_digits[i]=str_number[i]-'0';
    }
    printf("\nThe Digits are ");
    for(int i=0;i<N-1;i++)
    {
        printf("%d ",num_digits[i]);
    }
    //int i=0;
    if(((num_digits[0]+num_digits[1])+((num_digits[0])*(num_digits[1]))==n))
    printf("\nIt is a SPECIAL TWO DIGIT number");
    else
    printf("\nIt is not a SPECIAL TWO DIGIT number");
    return 0;
}
