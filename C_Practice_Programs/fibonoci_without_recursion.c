#include "common_header.h"
#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,n,i,f[50],j;
    int N1[50];
    printf("Enter the number ");
    scanf("%d",&n);
    printf("%d",n1);
    printf("\n%d",n2);
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("\n%d",n3);
        for(j=0;j<n;j++)
        {
            f[j]=n3;
        }
        n1=n2;
        n2=n3;
    }
    printf("Enter the three numbers \n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&N1[i]);
    }

    return 0;
}