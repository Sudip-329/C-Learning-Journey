#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void create(int);
void check();
void display();
void count();
void search();
void insert();
void delete();
void delete_key();
void insert_key();
void insert_before();
int main()
{

char c='y',ch;
int p;
    while (c=='y')
    {
    printf("Do you want to create a node(y or n):-");
    scanf("%s",&c);
    if (c=='y'){
        printf("Enter the elelments : ");
        scanf("%d",&p);
        create(p);
    }
}
printf("\n For display Data give 'a' \n For check empty or not give 'b'\n For inserting data give 'c'\n For deleting node any position give'd'\n for delete key node give 'e'\n For counting node give 'f'\n For searching elements give 'g'\nFor inserting after key element 'h'\nFor inserting before key element 'i'\n Which operation you want :   ");
scanf("%s",&ch);
switch (ch)
{
case 'a':
    display(); 
    break;       
case 'b':
    check(); 
    break;
case 'c':
    insert();
    break;
case 'd':
    delete();
    break;    
case 'e':
    delete_key();
    break;    
case 'f':
    count(); 
    break;
case 'g':
    search();
    break;
case 'h':
    insert_key(); 
    break;
case 'i':
    insert_before(); 
    break;
default:
    break;
}

return 0;
}
void create(int n1)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n1;
    p->next=NULL;
    if (start==NULL)
    {
        start=p;
    }else{
    struct node *temp=start;
    while (temp->next!=NULL)
        temp=temp->next;
    temp->next=p;
    }

}
void display(){
    struct node *pt;
    pt=start;
    printf("All linked list data : \n");
    while (pt!=NULL){
        printf(" %d  ",pt->data);
        pt=pt->next;
    }  
}
void check(){
    struct node *temp;
    temp=start;
    if(temp!=NULL)  
        printf("This link list is not empty\n");
    else
        printf("This link list is empty\n");
}

void count(){
    int count=0;
    struct node *c;
    c=start;
    while (c!=NULL){
        c=c->next;
        count++;
    }
    printf("The number of node is- %d",count);
}
void search()
{
    int k;
    printf("\nEnter the key that you search: ");
    scanf("%d",&k);
    int c=0;
    struct node *key=(struct node*)malloc(sizeof(struct node));
    key=start;
    while (key!=NULL){
        c++;
        if (key->data==k){
            printf("%d is present the node at %d position.",k,c);
            break;
        }
        key=key->next;
        
    }
    if (key==NULL)
        printf("%d is not found the list .",k);
}

void insert(){
    int n,pos,c=1;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    printf("Enter the postion where are you want to insert : ");
    scanf("%d",&pos);
    struct node *temp;
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    if (pos==1)
    {
        p->next=start;
        start=p;
    }else{
        temp=start;
        while ((c<pos-1)&&temp->next!=NULL)
        {
            temp=temp->next;
            c++;
        }
        p->next=temp->next;
        temp->next=p;
    }
    display();

}
void delete(){
    int pos,c=1;
    printf("Enter the postion where are you want to delete : ");
    scanf("%d",&pos);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    struct node *temp=start;
    if (pos==1)
        start=start->next;
    else{
    while (c<pos-1 && temp->next!=NULL)
    {
        temp=temp->next;  
        c++;      
    }
    if (temp->next!=NULL)
        temp->next=temp->next->next;        
    } 
    display();
    
}

void delete_key(){
    int key;
    struct node *p,*temp;
    printf("Enter the element that is you want to delete : ");
    scanf("%d",&key);
    temp=start;
    if (temp->data==key){
    start=start->next;  
    }else{
    temp=temp->next;
    while (temp!=NULL && temp->data!=key){
        p=temp;
        temp=temp->next;    
    }
    if(temp!=NULL)
        p->next=temp->next; 
    else
        printf(" %d elements is not available in link list\n",key);       
    }
display();    
}
void insert_key(){
int key,n;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    printf("Enter the key element : ");
    scanf("%d",&key);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    struct node *temp=start;
    while (temp!=NULL && temp->data!=key)
    {
        temp=temp->next;
    }
    if (temp!=NULL)
    {
    p->next=temp->next;
    temp->next=p;
    }else
        printf("%d is not in the link list.\n",key);
    
    display(); 
}
void insert_before(){
    int key,n;
    struct node *t;
    printf("Enter the elements that you want to insert : ");
    scanf("%d",&n);
    printf("Enter the key element : ");
    scanf("%d",&key);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    struct node *temp=start;
    if (temp->data==key)
    {
        p->next = start;
        start=p;
    }else
    {
    temp=temp->next;
    while (temp!=NULL && temp->data!=key)
    {
        t=temp;
        temp=temp->next;
    
    }    
    if (temp!=NULL)
    {
    p->next=t->next;
    t->next=p;
    }else
    printf("%d is not in the link list.\n",key);
    }
    
    display(); 
}