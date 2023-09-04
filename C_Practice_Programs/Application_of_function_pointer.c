#include "common_header.h"
void sum(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
int main()
{
    int ch,a,b;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nEnter the choices ");
    scanf("%d",&ch);
    void (*operation[10])(int,int)={sum,sub,mul};
    while(1)
    {
    operation[ch](a,b);
    exit(4);
    }
}
void sum(int a,int b)
{
    printf("\nsum of two numbers of %d,%d are %d",a,b,a+b);
}
void sub(int a,int b)
{
    printf("\nsum of two numbers of %d,%d are %d",a,b,a-b);
}
void mul(int a,int b)
{
    printf("\nsum of two numbers of %d,%d are %d",a,b,a*b);
}