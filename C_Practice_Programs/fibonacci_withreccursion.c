#include <stdio.h>
#include "common_header.h"
void fun(int n);

 void fun(int n)
{
    static int n1=0,n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d\n",n3);
        fun(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number upto\n");
    scanf("%d",&n);
    printf("%d\n",0);
    printf("%d\n",1);
    fun(n-2);
    return 0;
}
