#include<stdio.h>
#include <stdlib.h>
struct  node
{
    int data;
    struct node *link;
}*start=NULL;
void create();
void display();
void insert();
int main()
{
create();
display();
insert();
display();
}
void create()
{
    int k,n=1;
    while (n==1)
    {
        struct node *p=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node: ");
        scanf("%d",&k);
        p->data=k;
        p->link=NULL;
        struct node *t=start;
        if(start==NULL)
            start=p;
        else{
        while (t->link!=NULL)
        {
            t=t->link;
        }
        t->link=p; 
        }    
        printf("Press 1 to continune || press any key  to exit create function: ");
        scanf("%d",&n);
        
    }
    
}
void display(){
    struct node *t=start;
    printf("\nThe list of data:  ");
    while (t!=NULL)
    {
        printf(" %d ",t->data);
        t=t->link;
    }
    

}
void insert()
{
    int key,n;
    struct node *t1,*t2;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    printf("Enter the key element : ");
    scanf("%d",&key);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->link=NULL;
    t1=t2=start;
    while (t2->data!=key)
    {
        t1=t2;
        t2=t2->link;
    }
    t1->link=p;
    p->link=t2;
    
}