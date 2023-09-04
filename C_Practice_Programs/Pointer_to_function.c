#include "common_header.h"
int sum(int a,int b);
int main()
{
    int (*operation)(int,int);
    operation=sum;
    int result=sum(5,6);
    printf("\n Sum of two numbers %d",result);
}
int sum(int a,int b)
{
    int addition=a+b;
    return addition;
}
