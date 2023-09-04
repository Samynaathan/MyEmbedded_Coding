#include "common_header.h"
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
   
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    printf("sorted array in assending order\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
}