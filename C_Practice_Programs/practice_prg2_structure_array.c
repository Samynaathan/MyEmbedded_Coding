#include <stdio.h>

typedef struct student
{
    char name[50];
    int id;
}stu;

int main()
{
    stu s1[5];
    printf("Enter the student details \n");
    for(int i=0;i<5;i++)
    {
        scanf("%s %d",&s1[i].name,&s1[i].id);
    }
    printf("\n\n");
    for(int i=0;i<5;i++)
    {
        printf("%s %d\n",s1[i].name,s1[i].id);
    }
    return 0;
}