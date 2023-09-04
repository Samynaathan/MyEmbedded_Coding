#include "common_header.h"
struct student* print(struct student*ptr1);
struct student
{
    char name[100];
    int id;
};
struct student* print(struct student*ptr1)
{
    strcpy(ptr1->name,"muthu");
    ptr1->id=4321;
    return ptr1;
}
int main()
{
    struct student *ptr;
    ptr=(struct student*)malloc(sizeof(struct student));
    strcpy(ptr->name,"shyam");
    ptr->id=1234;
    printf("%s %d",ptr->name,ptr->id);
    ptr=print(ptr);
    printf("\n%s %d",ptr->name,ptr->id);
    return 0;
    free(ptr);
    ptr=NULL;
}
