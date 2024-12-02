#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void display();
void create();
void reverse();
int main(){
create();
display();
reverse();
printf("After reverseing link list: ");
display();
}
void create(){
    int k,n=1;
    while (n==1)
    {
        struct node *p=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node: ");
        scanf("%d",&k);
        p->data=k;
        p->next=NULL;
        struct node *t=start;
        if(start==NULL)
            start=p;
        else{
        while (t->next!=NULL)
        {
            t=t->next;
        }
        t->next=p; 
        }    
        printf("Press 1 to continune || press any key  to exit create function: ");
        scanf("%d",&n);
        
    }
}
void display()
{
    struct node *p=start;
    printf("All linked list data : \n");
    while (p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    
}
void reverse()
{
struct node *t=start;
int i=0,a[20];
while (t!=NULL)
{
a[i]=t->data;
i++;
t=t->next;    
}
t=start;
while (t!=NULL)
{
    t->data=a[i-1];
    i--;
    t=t->next;
}

}