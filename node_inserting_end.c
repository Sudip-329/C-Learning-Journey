#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void add_node(struct node *p, int d)
{
    struct node *ptr, *temp;
    
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->link=NULL;

    if (p==NULL)
    {
        p=temp;
    }else{
        ptr=p;
    }
    
    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
int main()
{
    struct node *start=malloc(sizeof(struct node));
    start->data=23;
    start->link=NULL;

    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=90;
    ptr->link=NULL;

    start->link=ptr;
    
    add_node(start,67);
    ptr=start;
    while (ptr!=NULL)
    {
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
}