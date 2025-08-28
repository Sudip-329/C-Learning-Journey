#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;

void create();
void display();
void add_node();
void delete_first_node();
int main()
{
int c,n=1;

while (n==1)
{
printf("1.Create a list .\n2.Traverse the list .\n3.Add a node a first node.\n4.Delete the first node.\n5.Exit\n");
printf("Enter the number which opertation you want: ");
scanf("%d",&c);
    switch (c)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        add_node();
        break;
    case 4:
        delete_first_node();
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
        struct node *t,*p=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data of node: ");
        scanf("%d",&k);
        p->data=k;
        p->next=NULL;
        if(start==NULL){
            start=p;
            start->next=start;
        }else{
            t=start;
            while (t->next!=start)
            {
                t=t->next;
            }
            t->next=p;
            p->next=start;
            
        }  
        printf("Press 1 to continue || 0  to exit create function: ");
        scanf("%d",&n);
        
    }
    
}
void display(){
    struct node *t=start;
    printf("\nThe list of data:  ");
    do{
        printf(" %d ",t->data);
        t=t->next;
    }while(t!=start);
}

void add_node(){
    int n;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    struct node *t,*p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    t=start;
    while (t->next!=start)
        t=t->next;

        p->next=start;
        start=p;
        t->next=start;
    
    
    display(); 
}


void delete_first_node(){

    if(start->next==start){
        start->next=NULL;
        start=NULL;
        printf("Now link list is empty.\n");
    }else{
        struct node *t=start;
        while (t->next!=start)
        {
            t=t->next;
        }
        start=start->next;
        t->next=start;
        display();
    }    

}
