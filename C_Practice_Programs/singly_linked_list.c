#include "common_header.h"
void add_node_at_end(struct node *head,int data);
struct node
{
    int data;
    struct node *link;
};
int main()
{
 struct node *head=(struct node*)malloc(sizeof(struct node));
 head->data=45;
 head->link=NULL;
 struct node *current=(struct node*)malloc(sizeof(struct node));
 current->data=50;
 current->link=NULL;
 head->link=current;
 printf("%d %d",head->data,current->data);
 struct node*ptr=head;
 ptr=add_node_at_end(ptr,70);
 }
void add_node_at_end(struct node *ptr,int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
    
}