#include "common_header.h"
unsigned int check_birthday(char* a,int b);

unsigned int check_birthday(char* a,int b)
{
  char is_bday[20]="july";
  int is_date= 5;
  if((strcmp(is_bday,a)==0)&&(is_date==b))
   return 1;
  else 
   return 0; 
}
int main()
{
    char bday[20];
    int date;
    printf("Enter the birthday and date\n");
    scanf("%s",bday);
    scanf("%d",&date);
    int result=check_birthday(bday,date);
    if(result)
        printf("yes it is her birthday\n");
    else 
        printf("No it is not her birthday\n");
        
}