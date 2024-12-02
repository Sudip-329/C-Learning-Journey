#include<stdio.h>
#include <stdlib.h>

struct  node
{
    int data;
    struct node *link;
}*start=NULL;

void create();
void display();
void sorting();
int main()
{
create();
display();
sorting();
printf("\nAfter sorting : \n");
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
void sorting(){
struct node *t1,*t2,*p,*q;
t2=t1=start;
p=q=NULL;
while (t1!=NULL)
{
    t2=t1->link;
    while (t2!=NULL)
    {
        if(t1->data > t2->data){
            // int temp=t1->data;
            // t1->data=t2->data;
            // t2->data=temp;
            p=t1->link;
            q=t2->link;
            t2=t2->link;
            //p=t1->link;
            //t1->link=t2->link;
            q=t1;
            t1=p;
            
        }
        t2=t2->link;
    }
    t1=t1->link;
    
}

}