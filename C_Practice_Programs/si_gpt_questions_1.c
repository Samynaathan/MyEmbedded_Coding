#include "common_header.h"
int main()
{
    int n1,n2;
    printf("Enter the no.of elements in 1st array\n");
    scanf("%d",&n1);
    printf("Enter the no.of elements in 2nd array\n");
    scanf("%d",&n2);
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    for(int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    int arr3[n1+n2];
    for(int i=0;i<n1;i++)
        arr3[i]=arr1[i];
    for(int i=0;i<n2;i++)
        arr3[n1+i]=arr2[i];
    for(int i=0;i<(n1+n2);i++)
        printf("%d\t",arr3[i]);
    
    for (int i = 0; i < (n1+n2)-1; i++)
    {
        for (int j = 0; j < (n1+n2)-1-i; j++)
        {
            if(arr3[j]>arr3[j+1])
            {
                int temp=arr3[j+1];
                arr3[j+1]=arr3[j];
                arr3[j]=temp;
            }
        }
        
    }
    printf("\n");
    for (int i = 0; i < (n1+n2); i++)
    {
        printf("%d\t",arr3[i]);
    }
    
    
    return 0;
}