#include "common_header.h"
int linear_search(int arr[],int key);
#define SIZE 5
int main()
{
    int arr[SIZE];
    int key, pos=0,i;
    printf("Enter the numbers\n");
    for(i=0;i<SIZE;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<SIZE;i++)
    printf("%d ",arr[i]);
    printf("\n");
    printf("Enter the value to find\n");
    scanf("%d",&key);
    pos=linear_search(arr,key);
    if(pos)
    printf("\nNumber %d is in position of %d ",key,pos);
    else
    printf("Element not found\n");
    return 0;
}
int linear_search(int array[],int a)
{
    for(int i=0;i<SIZE;i++)
    {
        if(a==array[i])
        return i+1;
    }
    return 0;
}