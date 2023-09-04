/* Return the Next Number from the Integer Passed (IBM 2020)
implement a program that takes a number as an argument, increments the number by +1 and returns the result

input ----------> a number from the user
constraints-----> no constraints
output ---------> an incremented value */

#include "common_header.h"
unsigned int increment(int a);
int main()
{
    int n,temp;
    printf("Enter the actual number: ");
    scanf("%d",&n);
    temp=increment(n);
    printf("Next incrememted number is %d",temp);
}
unsigned int increment(int a)
{
    a++;
    return a;
}
