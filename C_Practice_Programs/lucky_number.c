/*  LBP20
~~~~~~
Lucky Customer

An e-commerce website wishes to find the lucky customer who will be eligible for full value cash back. 
For this purpose,a number N is fed to the system. 
It will return another number that is calculated by an algorithm. 
In the algorithm, a sequence is generated, in which each number n the sum of the preceding numbers. initially the sequence will have two 1's in it. 
1,1,2,3,5,8......
The System will return the Nth number from the generated sequence which is treated as the order ID. The lucky customer will be one who has placed that order. 
Write an alorithm to help the website find the lucky customer.

input --------> a number
constraint ---> n>0
output -------> a number    */
#include "common_header.h"
int main()
{
    int n,n3;
    int n1=1,n2=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d \t",n3);
        n1=n2;
        n2=n3;
    }
    printf("\n");
    printf("Order id of the lucky customer is %d\n",n3);
    return 0;
}