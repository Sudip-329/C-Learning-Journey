#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
}*start=NULL,*last=NULL;

void create();
void forward_traverse();
void backward_traverse();
int check();
void add_node();
void delete();
void delete_first_node();
void reverse_node();
void insert_before();
void insert_after();

int main()
{
int c,n=1;

while (n==1)
{
printf("1.Create a list .\n2.Traverse the list in forward direction.\n3.Traverse the list in backward direction.\n4.Add a node after a given data item.\n5.Add a node before a given data item.\n6.Delete a node at a given position.\n7.Add a node a first node.\n8.Delete the first node.\n9.Reverse the content of the linked list.\n10.Exit\n");
printf("Enter the number which opertation you want: ");
scanf("%d",&c);
    switch (c)
    {
    case 1:
        create();
        break;
    case 2:
        forward_traverse();
        break;
    case 3:
        backward_traverse();
        break;
    case 4:
        insert_after();
        break;
    case 5:
        insert_before();
        break;
    case 6:
        delete();
        break;
    case 7:
        add_node();
        break;
    case 8:
        delete_first_node();
        break;
    case 9:
        reverse_node();
        break;
    default:
    exit(0);
    }
    printf("\nPress 1 to continune || 0 to exit: ");
    scanf("%d",&n);
    if(n==0 || n!=1) exit(0);

}

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
        p->next=NULL;
        p->prev=NULL;
        if(start==NULL){
            start=p;
            last=p;
        }else{
            last->next =p;
            p->prev=last;
            last=p;
        }  
        printf("Press 1 to continue create function|| 0  to exit: ");
        scanf("%d",&n);
        
    }
    
}
void forward_traverse(){
    struct node *t=start;
    printf("\nThe list of data forward direction:  ");
    while (t!=NULL)
    {
        printf(" %d ",t->data);
        t=t->next;
    }
}
void backward_traverse(){
    struct node *t=last;
    printf("\nThe list of data backward direction:  ");
    while (t!=NULL)
    {
        printf(" %d ",t->data);
        t=t->prev;
    }
}


int check(){
    if(start!=NULL)  
        return 1; 
    else
        return 0;
}

void insert_after(){
    int k,n;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    printf("Enter the key element : ");
    scanf("%d",&k);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    p->prev=NULL;
    struct node *temp=start;

    
    while (temp!=NULL && temp->data!=k)
    {
        temp=temp->next;
    }   
    if (temp!=NULL)
    {
    p->next=temp->next;
    p->prev=temp;
    if(temp->next!=NULL){
    temp->next->prev=p;
    temp->next=p;
    }else{
        temp->next=p;
        last=p;
    }
    }else
    printf("%d is not in the next list.\n",k);
    
    
    forward_traverse(); 
}


void insert_before(){
    int key,n;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    printf("Enter the key element : ");
    scanf("%d",&key);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    p->prev=NULL;
    struct node *temp=start;
    if (start->data==key)
    {
        p->next=start;
        temp->next->prev=p;
        start=p;
    }else
    {
    temp=temp->next;
    while (temp!=NULL && temp->data!=key)
    {
        temp=temp->next;
    }    
    if (temp!=NULL){
    p->next=temp;
    p->prev=temp->prev;
    temp->prev->next=p;
    temp->prev=p;
    }else
    printf("%d is not in the next list.\n",key);
    }
    
    forward_traverse(); 
}


void delete(){
if (check()==1)
{
    int pos,c=1;
    printf("Enter the postion for delete : ");
    scanf("%d",&pos);
    struct node *temp=start,*t;
    if (pos==1){
        start=start->next;
        start->prev=NULL;
    }else{
    while (c<pos && temp!=NULL)
    {
        temp=temp->next;  
        c++;      
    }
    if (temp!=NULL){
        t=temp->prev;
        if (temp->next!=NULL)
        {
        temp->prev->next=temp->next;
        temp->next->prev=t; 
        }else{
        last=temp->prev;
        temp->prev->next=NULL;
        }
    }else
    printf("Enter oposition is more than nodes numbers.\n");
    }
}else
    printf("This next list is empty\n");

    forward_traverse();
    
}

void add_node(){
    int key,n;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    p->prev=NULL;
    struct node *temp=start;
        p->next=start;
        start->prev=p;
        start=p;
    
    
    forward_traverse(); 
}

void delete_first_node(){
if (check()==1)
{
    if(start->next==NULL){
        start=NULL;
        printf("Now link list is empty.\n");
    }
        
    else{
        start=start->next;
        start->prev=NULL;
        forward_traverse();
    }    
}else
    printf("This link list is empty\n");

    
}

void reverse_node()
{
    struct node *t1,*t2;
    t1=start;t2=last;
    while (t1!=t2 && t2->next!=t1)
    {
        int p=t1->data;
        t1->data=t2->data;
        t2->data=p;
        t1=t1->next;
        t2=t2->prev;
    }

    forward_traverse();
}
