#include "common_header.h"
int factorial(int a);
int main()
{
    int n,f;
    printf("Enter the number ");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of given number is %d",f);
    return 0;
}
int factorial(int a)
{
 if(a==1)
 return 1;
 else
 {
    return a*factorial(a-1);
 }
}
