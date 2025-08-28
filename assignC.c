#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{
    char name[20],address[20],branch[20];
    int roll;
    float cgpa;
    struct node *next;
};
struct node_head
{
int count;
struct node *next;
}*start=NULL;
void create();
void display();
void display_for_branch();
void display_for_cgpa_branch();
int main()
{
int c,n=1;

while (n==1)
{
printf("1.Create a list .\n2.Display student information .\n3.Display the students details belonging to a particular branch.\n4.Display the students details securing more than 7.5 CGPA and belonging to a given branch.\n5.Exit\n");
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
        display_for_branch();
        break;
    case 4:
        display_for_cgpa_branch();
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
    char name[20],address[20],branch[20];
    float cgpa;
    int roll,n=1,c=0;
if (start==NULL)
{
    struct node_head *q;
    q=(struct node_head*)malloc(sizeof(struct node_head));
    start=q;
    q->next=NULL;
    start->count=0;
}

    while (n==1)
    {
        struct node *t,*p=(struct node*)malloc(sizeof(struct node));
        printf("Enter your name: ");
        scanf("%s",name);
        //fflush(stdin);
        printf("Enter your roll: ");
        scanf("%d",&roll);
        printf("Enter your cgpa: ");
        scanf("%f",&cgpa);
        printf("Enter your address-city: ");
        scanf("%s",address); 
        //fflush(stdin);       
        printf("Enter your branch: ");
        scanf("%s",branch);
        //fflush(stdin);
        p->roll=roll;
        strcpy(p->name,name);
        strcpy(p->address,address);
        strcpy(p->branch,branch);
        p->cgpa=cgpa;
        p->next=NULL;
        if(start->next==NULL){
            start->next=p;
            start->count++;
        }else{
            t=start->next;
            while (t->next!=NULL)
            {
                t=t->next;
            }
            t->next=p;
            p->next=NULL;
            start->count++;
        }  
        printf("Press 1 to continue give another info || 0 to exit: ");
        scanf("%d",&n);
        
    }
    
}
void display(){
    struct node *temp;
    temp=start->next;
    printf("Count value: %d",start->count);
    printf("\nThe list of data of students:  \n");
    while(temp!=NULL){
        printf("Name: %s\n", temp->name);
        printf("Roll Number: %d\n", temp->roll);
        printf("CGPA: %0.4f\n", temp->cgpa);
        printf("Address: %s\n", temp->address);
        printf("Branch: %s\n\n", temp->branch);
        temp = temp->next;
    }
}
void display_for_branch(){
    struct node *temp;
    temp=start->next;
    char b_name[20];
    printf("Enter the branch name that you search: ");
    scanf("%s",b_name);
    fflush(stdin);    
    printf("\nThe list of data of that branch:  \n");
    while(temp!=NULL){
        if (strcmp(temp->branch,b_name)==0)
        {
        printf("Name: %s\n", temp->name);
        printf("Roll Number: %d\n", temp->roll);
        printf("CGPA: %0.4f\n", temp->cgpa);
        printf("Address: %s\n", temp->address);
        printf("Branch: %s\n\n", temp->branch);     
        }
        temp = temp->next;
    }
}
void display_for_cgpa_branch(){
    struct node *temp;
    temp=start->next;
    char b_name[20];
    printf("Enter the branch name that you search: ");
    scanf("%s",b_name);
    fflush(stdin);    
    printf("\nThe list of data of that branch those get more than 7.5 cgpa:  \n");
    while(temp!=NULL){
        if (strcmp(temp->branch,b_name)==0 && temp->cgpa>7.5)
        {
        printf("Name: %s\n", temp->name);
        printf("Roll Number: %d\n", temp->roll);
        printf("CGPA: %0.4f\n", temp->cgpa);
        printf("Address: %s\n", temp->address);
        printf("Branch: %s\n\n", temp->branch);     
        }
        temp = temp->next;
    }
}
