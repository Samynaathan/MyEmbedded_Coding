/* To check whether the given year is leap year or not.

input------> year from the user
constraint-> no constraint
output-----> leap year or not leap year

hint: for century year if it is divisble by 400 then only it is leap year */

#include "common_header.h"
int main(void)
{
    int year;
    printf("Enter the year ");
    scanf("%d",&year);
    if(year%4==0){
        printf("It is leap year");
    }
    else if(year%100==0)
    {
        printf("It is leap year");
    }
    else if(year%400==0){
        printf("It is leap year");
    }
    else{
        printf("It is not leap year");
    }
    return 0;
}