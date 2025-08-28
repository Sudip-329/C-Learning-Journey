#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void create(struct node **,int);
void display(struct node **);
void search_delete_add(struct node **);
void check_sort(struct node **);
void insert_sorted_way(struct node **);
void find_middle(struct node **);
void intersection(struct node **);
void sort_even_odd(struct node **);
void palindrome_check(struct node **);
void sorting(struct node **);
void reverse_mth_first_node(struct node **);
int count(struct node **);
void rotate_counter_clockwise(struct node **);
void reverse_every_k(struct node **);
void swap_k_node(struct node **);
void detect_cycle(struct node **);
void even_position_reverse(struct node **);

int main()
{
struct node *start=NULL;    
int c,n=1;
while (n==1)
{
printf("1.Create a list .\n2.Display the list.\n3.Search a node and delete and add that node at first.\n4.Find the middle node in a single linked list.\n5.To reverse the first m elements of a linked list of n nodes.\n6.Check whether a given linked list is sorted or not.\n7.insert an element into the linked list in sorted way.\n8.Find the intersections elements of two linked list.\n9.All even numbers appear before all the odd numbers in the modified linked list.\n10.check whether a singly linked list is a palindrome or not.\n11.To detect a cycle in a linked list.\n12.Reverse only even position nodes in a singly linked list.\n13.swap kth node from beginning with kth node from end in a Linked List.\n14.To reverse every k nodes.\n15.Rotate the linked list counter-clockwise by k nodes.\n16.Exit\n");
printf("Enter the number which operation you want: ");
scanf("%d",&c);
    switch (c)
    {
    case 1:
        {
        int n, t=1;
        while(t==1)
        {
        printf("Give elements of link list : ");
        scanf("%d",&n);
        create(&start,n);
        printf("If want another node pres 1 || for exit any key : ");
        scanf("%d",&t);
        }
        break;
        }
    case 2:
        display(&start);
        break;
    case 3:
        search_delete_add(&start);
        break;
    case 4:
        find_middle(&start);
        break;
    case 5:
        reverse_mth_first_node(&start);
        break;
    case 6:
        check_sort(&start);
        break;
    case 7:
        insert_sorted_way(&start);
        break;
    case 8:
        intersection(&start);
        break;
    case 9:
        sort_even_odd(&start);
        break;
    case 10:
        palindrome_check(&start);
        break;
    case 11:
        detect_cycle(&start);
        break;
    case 12:
        even_position_reverse(&start);
        break;
    case 13:
        swap_k_node(&start);
        break;
    case 14:
        reverse_every_k(&start);
        break;
    case 15:
        rotate_counter_clockwise(&start);
        break;

    default:
    exit(0);
    }
    printf("\nPress 1 to continune || 0 to exit: ");
    scanf("%d",&n);
    if(n==0 || n!=1) exit(0);
}
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
    printf("\nThe list of data:  ");
    while (t!=NULL)
    {
        printf(" %d ",t->data);
        t=t->link;
    }
}


void search_delete_add(struct node **start)
{
    struct node *t=*start,*p,*temp=*start;
    int k;
    printf("Enter the key: ");
    scanf("%d",&k);
    if (t->data==k)
    {
        printf("Already in the first position.");
    }else{
        t=t->link;
        while (t->data!=k && t->link!=NULL)
        {
            temp=t;
            t=t->link;
        }
        if(t->data==k ||t->link!=NULL){
        p=temp->link;
        temp->link=t->link;
        p->link=*start;
        *start=p;
        }else
        printf("The given elements not found in the list");       
        
    }
    display(start);

}

void find_middle(struct node **start){
    struct node *t1,*t2;
    t1=t2=*start;
    if ((t1->link==NULL) || (t1->link->link==NULL))
        printf("There are node middle elements.\n");
    else{
    while(t1->link!=NULL && t1->link->link!=NULL){
        t1=t1->link->link;
        t2=t2->link;
    }
    if((t1->link!=NULL) && t1->link->link==NULL){
        printf("In this list has even numbers of node, Middle node will be two : %d  %d .",t2->data,t2->link->data);
    }else
        printf("The middle node is  %d .",t2->data);
    }
    
}


void reverse_mth_first_node(struct node **start)
{
    int m,i; 
    printf("How many elements want to reverse from the begining: ");
    scanf("%d",&m);
    struct node *t1,*t2,*prev,*p,*q;
    t1=p=*start;
    i=m;
    while(i>0 && p!=NULL){
        p=p->link;
        i--;
    }
    if (i!=0 && p==NULL)
    {
        printf("Given number is more than number of node.");
    }else{
    prev=p;
    while (m>0 && t1!=NULL)
    {
        t2=t1->link;
        t1->link=prev;
        prev=t1;
        t1=t2;
        m--;
    }
    *start=prev;
    display(start);
    }
}


void check_sort(struct node **start){
struct node *t=*start;
    int k=0,ta=0;
    while (t->link!=NULL)
    {
        if ((t->data >= t->link->data) )
        {
            k++;
        }else
            ta++;

        t=t->link;
    }
    if((k==0 && ta!=0) || (k!=0 && ta==0))
    printf("This list is sorted\n");
    else
    printf("This list is not sorted .\n");

    display(start);

}
void insert_sorted_way(struct node **start){
    struct node *t,*p,*t2=*start;
    sorting(start);
    int k,pa=0,ta=0;
    while (t2->link!=NULL)
    {
        if ((t2->data >= t2->link->data) )
        {
            pa++;
        }else
            ta++;

        t2=t2->link;
    }
    p=(struct node *)malloc(sizeof(struct node));
    printf("Enter a elements: ");
    scanf("%d",&k);
    p->data=k;
    p->link=NULL;
    t=*start;
    if (pa==0){
    if(t->data>=k){
        p->link=*start;
        *start=p;
    }else{
    while ( t->link!=NULL){
        if (t->link->data>=k)
        {
            p->link=t->link;
            t->link=p;
            break;
        }
        t=t->link;
    }
    if (t->link==NULL)
        t->link=p;   
    }            
    }else{
    if(t->data<=k){
        p->link=*start;
        *start=p;
    }else{
    while ( t->link!=NULL){
        if (t->link->data<=k)
        {
            p->link=t->link;
            t->link=p;
            break;
        }
        t=t->link;
    }
    if (t->link==NULL)
        t->link=p;   
    }            
    }
    
    display(start);
    
}

void intersection(struct node **start){

    struct node *second=NULL,*third=NULL;
        int n, p=1;
        while(p==1)
        {
        printf("Give elements of 2nd link list : ");
        scanf("%d",&n);
        create(&second,n);
        printf("If want another node pres 1 || for exit any key : ");
        scanf("%d",&p);
        }    
    struct node *t1,*t2=*start;
    sorting(&second);
    sorting(start);
    t1=second;
    while(t1!=NULL && t2!=NULL){
    if(t1->data<t2->data)
        t1=t1->link;
    else if(t1->data>t2->data)
        t2=t2->link;
    else{
        create(&third,t1->data);
        t1=t1->link;
        t2=t2->link;
    }      
    }
    printf("\nThe intersections elements of two linked list :\n");
    display(&third);
}


void sort_even_odd(struct node **p){
    struct node *t1,*t2,*t3=*p;
    while (t3!=NULL)
    {
        t1=*p;
        t2=t1->link;
        while (t2!=NULL)
        {
            if (t1->data%2!=0 && t2->data%2==0)
            {
                int temp=t1->data;
                t1->data=t2->data;
                t2->data=temp;
            }
            t1=t1->link;
            t2=t2->link;
        }
        t3=t3->link;
    }
    printf("\nAfter sorting the elements even and odd.\n");
    display(p);
}

void palindrome_check(struct node **p){
    struct node *t3=*p;
    int *a,i=0,temp,c;
    c=count(p);
    a=(int *)malloc(c*sizeof(int));
    while (t3!=NULL)
    {
        a[i]=t3->data;
        t3=t3->link;
        i++;
    }
    t3=*p;
    while (t3!=NULL){
        if (t3->data!=a[i-1]){
            printf("This singly link list not palindrome.\n");
            break;
        }
        t3=t3->link;
        i--;
    }
    if (i==0)
        printf("This singly link list is palindrome.\n");

}

void even_position_reverse(struct node **start){
    struct node *t3,*t1,*t2,*q,*prev;
    t1=t2=*start;
    prev=NULL;
    while (t1!=NULL && t1->link!=NULL)
    {
        t2=t1->link->link;
        t1->link->link=prev;
        prev=t1->link;
        t1->link=t2;
        t1=t1->link;
    }
    t2=t1=*start;
    while (t1!=NULL )
    {
        q=t1->link;
        t1->link=prev;
        t3=prev->link;
        t1->link->link=q;
        t1=t1->link->link;
        if(t3==NULL){
        prev=t3;
        break;
        }
        prev=t3;
    }
    display(start); 

}

void detect_cycle(struct node **start){
    struct node *t1,*t2;
    int i=1;
    t1=t2=*start;
    while (t1!=NULL)
    {
        t2=t1->link;
        while (t2!=NULL)
        {
            if(t1==t2){
            printf("A cycle is detected in a linked list.\n");
            i++;
            break;
        }
        t2=t2->link;
        }
        if(i==2) break;

        t1=t1->link;
        
    }
    if(i==1)
    printf("A cycle is not detected in a linked list.\n");    
}
void swap_k_node(struct node **p){

    struct node *t3,*tp,*t1,*t2,*pr,*q;
    int i=1,temp,c;
    printf("Swap kth node from beginning with kth node for ending. ");
    temp=count(p);
    scanf("%d",&c);
    t3=t1=t2=pr=*p;
    if (c==1 || c==temp)
    {
        if(temp==2){
            *p=t1->link;
            (*p)->link=pr;
            pr->link=NULL;
        }else{
        q=t1->link;
        while (t1->link!=NULL)
        {
            t2=t1;
            t1=t1->link;
        }
        t2->link = *p;
        t2->link->link=NULL;
        *p=t1;
        (*p)->link=q;
        }
        
    }else if(temp%2==0 && (c==temp/2 ||(c==temp/2 +1))){
    while (i<(temp/2))
    {
        pr=t1;
        t1=t1->link;
        i++;
    }
    q=t1->link->link;
    pr->link=t1->link;
    pr->link->link=t1;
    pr->link->link->link=q;
    }else{
    while (i<c)
    {
        pr=t1;
        t1=t1->link;
        i++;
    }
    tp=t1;
    q=t1->link;
    while (t1->link!=NULL)
    {
        t3=t2;
        t1=t1->link;
        t2=t2->link;
    }
    t3->link=tp;
    t3->link->link=t2->link;
    pr->link=t2;
    pr->link->link=q;       
    }
    printf("After swaping kth elements.\n");
    display(p);
}
void reverse_every_k(struct node **start){
    struct node *t3,*t1,*t2,*q,*prev,*p;
    int i=1,k,c=1,m;
    printf("How many elements want to reverse in each time: ");
    scanf("%d",&m);
    t3=t1=p=*start;
    
    while (t1!=NULL)
    {
    i=m;k=m;
    while(i>0 && p!=NULL){
        p=p->link;
        i--;
    }
    if(c==1){
    prev=p;
    t3=t1;
    while (k>0 && t1!=NULL)
    {
        t2=t1->link;
        t1->link=prev;
        prev=t1;
        t1=t2;
        k--;
    }
    *start=prev;
    c++;        
    }else{
    prev=p;
    t1=t3->link;
    q=t3->link;
    while (k>0 && t1!=NULL)
    {
        t2=t1->link;
        t1->link=prev;
        prev=t1;
        t1=t2;
        k--;
    }
    t3->link=prev; 
    t3=q;       
    }
    }
    
    display(start); 
}
void rotate_counter_clockwise(struct node **start){
    struct node *t1,*t2;
    int i=1,k;
    printf("How many node you want to rotate: ");
    scanf("%d",&k);
    t2=*start;

        while (i<k)
        {
        t2=t2->link;
        i++;
        }
        t1=t2;        
        while (t1->link!=NULL)
        {
            t1=t1->link;
        }
        t1->link=*start;
        *start=t2->link;
        t2->link=NULL;
    
    display(start);  
}

void sorting(struct node **start){
    struct node *t1,*t2;
    t1=*start;
    while (t1!=NULL)
    {
        t2=t1->link;
        while (t2!=NULL)
        {
            if (t1->data>t2->data)
            {
                int temp=t1->data;
                t1->data=t2->data;
                t2->data=temp;
            }
            t2=t2->link;
        }
        t1=t1->link;
    }
    printf("After sorting the elements.\n");
    display(start);
}

int count(struct node **start){
    int co=0;
    struct node *c;
    c=*start;
    while (c!=NULL){
        c=c->link;
        co++;
    }
    return co;
}








