#include "common_header.h"
int main()
{
    int n, key;
    printf("Enter the number of elememts\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array before sorted\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
         if(arr[j]>arr[j+1])
         {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
        }
    }
    printf("\nThe array after sorted\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the Key elememt to find in the array ");
    scanf("%d",&key);
    int l=0;
    int r=n-1;
    
    int found =1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(key<arr[mid])
        {
            r=mid-1;
        }
        else if(key>arr[mid])
        {
            l=mid+1;
        }
        else if(key==arr[mid])
        {
            printf("The element found %d is in the position of %d\n",arr[mid],mid+1);
            found=0;
            break;
        }
    }
    if(found)
    {
        printf("The element not exsist\n");
    }
   return 0;
} 