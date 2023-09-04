/* problem statement:

Program to check whether the given number is even or odd number.

inputs ----------> a number from the user
output  ---------> even or odd or invalid
constraint ------> n>=0
#include "common_header.h" */

int main(void)
{
    int n;
    printf("Enter the number  ");
    if((scanf("%d",&n)!=1))  //scanf returns 0, incase of character or symbols
    {

        printf("invalid number");
    }
    else
    {
        if(n%2==0){
            printf("Given number is even");
        }
        else{
            printf("Given number is odd");
        }        
    }
    return 0;
}