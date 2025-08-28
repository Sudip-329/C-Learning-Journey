#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void create(struct node **,int);
void merge(struct node **,struct node **,struct node **);
void display(struct node **);
int main()
{
        struct node *start1=NULL,*start2=NULL,*start3=NULL;
        int e, t=1;
        printf("Give the first link list data as a sorted way: \n");
        while(t==1){
        printf("Enter the data : ");
        scanf("%d",&e);
        create(&start1,e);
        printf("If want another node pres 1 || for exit any key : ");
        scanf("%d",&t);  
        }
        t=1;
        printf("\nGive the second link list data as a sorted way: \n");
        while(t==1)
        {
        printf("Enter the data : ");
        scanf("%d",&e);
        create(&start2,e);
        printf("If want another node pres 1 || for exit any key : ");
        scanf("%d",&t);  
        }
    
    printf("The first link list.\n");
    display(&start1);
    printf("The second link list.\n");
    display(&start2);
    printf("The merge of two link list.\n");
    merge(&start1,&start2,&start3);
    display(&start3);
}

void create(struct node **start,int k)
{
        struct node *p=(struct node*)malloc(sizeof(struct node));
        p->data=k;
        p->link=NULL;
        struct node *t=*start;
        if(*start==NULL)
            *start=p;
        else{
        while (t->link!=NULL)
            t=t->link;

        t->link=p; 
        }

    
}

void display(struct node **start){
    struct node *t=*start;
    while (t!=NULL)
    {
        printf("%d  ",t->data);
        t=t->link;
    }
}

void merge(struct node **start1,struct node **start2,struct node **start3){
    struct node *t1,*t2,*t3=*start3;
    t1=*start1;t2=*start2;

    while (t1!=NULL && t2!=NULL)
    {
        if (t1->data>t2->data)
        {
            create(start3,t2->data);
            t2=t2->link;
        }else if(t1->data<t2->data){
            create(start3,t1->data);
            t1=t1->link;
        }else{
                create(start3,t1->data);
                t1=t1->link;
                t2=t2->link;   
        }
        
    }
    while (t1!=NULL)
    {
            create(start3,t1->data);
            t1=t1->link;
    }
    
    while (t2!=NULL)
    {
            create(start3,t2->data);
            t2=t2->link;
    }
    
    
}