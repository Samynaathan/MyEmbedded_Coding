/* Given an integer n, perform the following conditional actions,
if n is odd, print weird,
if n is even and in the inclusive range of 2 to 5, print Not Weird.
if n is even and in the inclusive range of 6 to 20, print Weird.
if n is even and greater than 20, print Not Weird.

input-----> a number from the user
constraint-> 1<=n<=100
output----> Weird or Not Weird */


#include "common_header.h"
int main(void)
{
    int n,choice;
    printf("Enter the number ");
    scanf("%d",&n);
    
    while((n>=1)&&(n<=100))
    {   printf("\n"); 
        printf("1-->Check whether the given number is Odd or not \n");
        printf("2-->Check whether the given number is even, range between 2 to 5 \n");
        printf("3-->Check whether the given number is even, range between 6 to 20 \n");
        printf("4-->Check whether the given number is even, range greater than 20 \n");
        printf("5-->Exit \n");
        printf("Enter the choice ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        if(n%2!=0){
        printf("Given number is odd, its Weird");
        }
        else{
            printf("Given number is not odd");
        }
                break;
        case 2:
        if(((n>=2)&&(n<=5))&&(n%2==0)){
            printf("Given number is even, its not Weird");
        }
        else if((n>=2)&&(n<=5)==false)
        {
            printf("Invalid range");
        }
        else if(n%2!=0){
            printf("Given number is not even");
        }
        break;
        case 3:
        if(((n>=6)&&(n<=20))&&(n%2==0)){
            printf("Given number is even, its Weird");
        }
        else if((n>=6)&&(n<=20)==false)
        {
            printf("Invalid range");
        }
        else if(n%2!=0){
            printf("Given number is not even");
        }
        break;
        case 4:
        if((n>=20)&&(n%2==0)){
            printf("Given number is even, its not Weird");
        }
        else if((n>=20)==false)
        {
            printf("Invalid range");
        }
        else if(n%2!=0){
            printf("Given number is not even");
        }
        break;
        case 5:
        exit(1);
        
        }
    }
    printf("!invalid, number should be in 1-100");
   return 0;        
}
