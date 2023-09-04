#include "common_header.h"
int main()
{
    int n1=0,n2=1,n3,n;
    printf("Enter the number upto\n");
    scanf("%d",&n);
    printf("The fibonacci series are\n");
    printf("%d\n%d\n",n1,n2);
    for(int i=2;i<=n;i++)
   { 
    n3=n1+n2;
    printf("%d\n",n3);
    n1=n2;
    n2=n3;
    }
    return 0;
}