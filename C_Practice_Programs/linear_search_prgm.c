#include"common_header.h"
int main()
{
    int a[20];
    int key;
    int position=0;
    int n;
    printf("\nEnter the number ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the Key element to find ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            position=i+1;
            break;
        }
    }
    if(position)
    {
        printf("\nYes the element found, the position of %d is %d ",key,position);
    }
    else 
    {
        printf("\nThe number not found");
    }
    return 0;
}