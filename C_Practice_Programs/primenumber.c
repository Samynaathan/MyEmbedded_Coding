/* #include "common_header.h"
int main()
{
    int n, m=0;
    int flag=0;
    printf("Enter thr numner to be check for prime or not ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        m=n%i;
        if(m==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Given number is prime");
    }
    else{
        printf("Given number is not prime");
    }
    return 0;
}
*/

#include "common_header.h"
int main()
{
    int i,j;
    printf("\n Prime numer from 1--100");
    printf("\n");
    for(i=1;i<=100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
}
