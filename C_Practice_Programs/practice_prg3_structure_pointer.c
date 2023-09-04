#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student* print(struct student *ptr1);

struct student 
{
    char name[50];
    int id;
};
struct student* print(struct student *ptr1)
{
    strcpy(ptr1->name,"shyam");
    ptr1->id=1234;
    return ptr1;
}
int main()
{
    struct student *ptr;
    ptr=(struct student*)malloc(sizeof(struct student));
    printf("Enter the student details\n");
    scanf("%s %d",&ptr->name,&ptr->id);
    printf("%s %d\n",ptr->name,ptr->id);
    ptr=print(ptr);
    printf("Datas after modified\n");
    printf("%s %d",ptr->name,ptr->id);
    free(ptr);
    ptr=NULL;
    return 0;

}