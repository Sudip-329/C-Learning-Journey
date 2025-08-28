#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coeff,exp;
    struct node *next;
};

void create(struct node **,int,int);
void polynomial(struct node **,struct node **,struct node **);
void display(struct node **);

int main()
{
    struct node *start1=NULL,*start2=NULL,*start3=NULL;
        int k,e, temp=1;
        printf("Give the first polynomial: \n");
        while(temp==1)
        {
        printf("Give the coefficient : ");
        scanf("%d",&k);
        printf("Enter the exponent : ");
        scanf("%d",&e);
        create(&start1,k,e);
        printf("If want another node pres 1 || for exit 0 key : ");
        scanf("%d",&temp);  
        }
        temp=1;
        printf("\nGive the second polynomial: \n");
        while(temp==1)
        {
        printf("Give the coefficient : ");
        scanf("%d",&k);
        printf("Enter the exponent : ");
        scanf("%d",&e);
        create(&start2,k,e);
        printf("If want another node pres 1 || for exit any key : ");
        scanf("%d",&temp);  
        }
    
    printf("The details of first polynomial.\n");
    display(&start1);
    printf("The details of second polynomial.\n");
    display(&start2);
    printf("The details of add two polynomial.\n");
    polynomial(&start1,&start2,&start3);
    display(&start3);
}

void create(struct node **head,int k,int e)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->coeff=k;
    p->exp=e;
    p->next=NULL;
    struct node *temp=*head;
    if(*head==NULL)
        *head=p;
    else
    {
        while (temp->next!=NULL)
        temp=temp->next;
        temp->next=p; 
    }
}

void display(struct node **head)
{
    struct node *temp=*head;
    printf("Coefficient----exponent\n");
    while (temp!=NULL)
    {
        printf("%d             %d\n",temp->coeff,temp->exp);
        temp=temp->next;
    }
}

void polynomial(struct node **start1,struct node **start2,struct node **start3)
{
    struct node *t1= *start1,*t2 = *start2,*t3=*start3;
    while (t1!=NULL && t2!=NULL)
    {
        if (t1->exp>t2->exp)
        {
            create(start3,t1->coeff,t1->exp);
            t1=t1->next;
        }
        else if(t1->exp<t2->exp)
        {
            create(start3,t2->coeff,t2->exp);
            t2=t2->next;
        }
        else
        {
            if(t1->coeff==(-(t2->coeff)))
            {
                t1=t1->next;
                t2=t2->next;
            }
            else
            {
                create(start3,(t1->coeff+t2->coeff),t1->exp);
                t1=t1->next;
                t2=t2->next;
            }
        }
    }
    while (t1!=NULL)
    {
            create(start3,t1->coeff,t1->exp);
            t1=t1->next;
    }
    while (t2!=NULL)
    {
            create(start3,t2->coeff,t2->exp);
            t2=t2->next;
    }
}