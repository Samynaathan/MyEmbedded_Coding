#include "common_header.h"
int *ispower(int *arr,int size);
int main()
{
    int arr_number[100];
    int n; 
    printf("How many values want to check\n");
    scanf("%d",&n);
    int arrcount=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr_number[i]);
    }

   int *result=ispower(arr_number,arrcount);
   printf("\n");
   for(int i=0;i<n;i++)
   {
    printf("%d  ",result[i]);
   }
}
int *ispower(int *arr,int size)
{
    int a[250];
    for(int i=0;i<25;i++)
    {
        a[i]=1<<i;
    }
    /*for(int i=0;i<25;i++)
    {
        printf("%d ",a[i]);
    }*/
    for(int i=0;i<size;i++)
    {
        int found=0;
        for(int j=0;j<25;j++)
        {
            if(arr[i]==a[j])
            {
            arr[i]=1;
            found=1;
            break;
            }
        }
            if(found==0)
            arr[i]=0;
    }
    return arr;
}