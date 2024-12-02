#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void sorting(struct node *,struct node *,struct node *);
void create(struct node *);

int main(){
struct node *head,*head1,*head2 ;//=(struct node*)malloc(sizeof(struct node));
head=NULL;
head1=NULL;
head2=NULL;
create(head);
create(head1);
sorting(head,head1,head2);

}
void create(struct node *start){
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
    struct node *ta=start;
    printf("All linked list data : \n");
    while (ta!=NULL)
    {
        printf(" %d ",ta->data);
        ta=ta->next;
    }
    }
}

void sorting(struct node *start1,struct node *start2,struct node *start3)
{

}