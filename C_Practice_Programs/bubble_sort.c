#include "common_header.h"
int main()
{
    int a[10];
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
            }
        }
        if(flag==0)
        break;
    }
    printf("\nNumbers in accending order");
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}