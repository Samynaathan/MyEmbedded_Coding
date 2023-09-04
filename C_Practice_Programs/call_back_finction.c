#include "common_header.h"
void sum(int a,int b);
void display(void (*operation)(int,int));
int main()
{
    display(sum);
    //display(sub);
}

void sum(int a,int b)
{
    printf("\n sum of two numbers is %d",a+b);
}
void display(void (*operation)(int,int))
{
    operation(5,6);
}