#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head = NULL,*tail = NULL;

int create(no) //okk
{
    struct node *cur;
    int i;
     printf("Enter data : \n");
    for(i=0; i<no; i++)
    {
        cur = (struct node*) malloc (sizeof(struct node));
        printf("Data %d : ",i+1);
        scanf("%d",&cur -> data);
        cur->next = NULL;
        if(head == NULL)
        {
            head = tail =cur;
        }
        else
        {
            tail->next= cur;
            tail = cur;
        }
    }
    return 0;
}

void display()//okk
{
    //int i;
    if(head==NULL)
    {
        printf("No node is created\n");
    }
    else{
    struct node *temp;
    temp=head;
    for(temp; temp != NULL; temp = temp->next)
    {
        printf("Data %d  | Address %u | Next address %u\n", temp->data,temp,temp->next);
    }
    }
}

void traverse()
{
struct node *temp = head; //Move to First Node
do
{
printf(" Data %d\n", temp->data);
temp = temp->next; //Move Pointer to Next Node
}while(temp!=NULL);
}


void insertAtFront()//okk
{
    int info;
    struct node *new;
    new = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &info);
    new->data = info;
    new->next = head;
    head = new;
}

void insertAtEnd()  //okk
{
    int data1;
    struct node *temp, *h;
    temp = malloc(sizeof(struct node));

    // Enter the number
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data1);


    temp->next = 0;
    temp->data = data1;
    h = head;
    while (h->next != NULL)
    {
        h = h->next;
    }
    h->next = temp;
}

void insertAtPosition()//okk
{
    struct node *temp, *newnode;
    int pos, d, i = 0;
    newnode = malloc(sizeof(struct node));

    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &d);
    temp = head;
    newnode->data = d;
    newnode->next = NULL;
    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}


void delatlast()//okk
{
    struct node *ptr,*temp;  //if said prv rather than using temp ,it will be better
    if(head==NULL)
    {
        printf(" List is Empty ");
        return ;
    }
        ptr=head;
        while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }

    temp->next=NULL;
    printf("Deleted element is %d\n", ptr->data);    
    free(ptr);
}



void delat_beg()//okk
{
    struct node *ptr;
    ptr = head;
    
    if(head==NULL)
    {
        printf("No node to delete\n");
    }
    else
    {
        head=head->next;
        free(ptr);
        printf("Node is Deleted\n");    
    }
}

/*void del_at_any_pos()
{
    int pos,i;
    struct node *ptr,*prv;
    prv = head;
    printf("Enter pos : ");
    scanf("%d",&pos);
    while(i < pos-1)
    {
        prv=prv->next;
        i++;
    }
    ptr = prv->next;
    prv->next = ptr->next;
    free(ptr);

}*/

void del_anypos()
{
    int i,pos;
    struct node *ptr = head,*prv;
    if(head == NULL)
    {
        printf("No node to delete.");
        return;
    }
    else
    {
        printf("Enter position to delete.");
        scanf("%d",&pos);
        pos = pos-1;
        for(i=0; i<pos; i++)
        {
            prv = ptr;
            ptr = ptr->next;
        }
        if(prv ==NULL)
        {
            printf("Position not exist.");
        }
        else
        {
            prv->next = ptr->next;
            printf("Deleted node is %d\n",ptr->data);
            free(ptr);
        }
    }
}

/*void reverse() // also okk but hard algorithm
{
    struct node *curr=head, *prev, *ptr;

	if(curr->next==NULL)
    {
        printf("No node present.");
	    return;
    }
	prev=curr->next;
	curr->next=NULL;
	while(prev->next!=NULL)
	{
	    ptr=prev->next;
	    prev->next=curr;
        curr=prev;
	    prev=ptr;
	}
	prev->next=curr;
	head=prev;
}*/

int rev(n)
{
    int i,j,k;
    struct node *temp;
    temp=head;
    k=n;  //always node number will not be known so find node by traversing.
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<k-1; j++)
        {
            temp=temp->next;
        }
        k--;
        printf(" Data-> %d\n ", temp->data);
        temp=head;
    }
}

void search()
{
    int n,i = 0;
    printf("Enter the data which u are searching : ");
    scanf("%d",&n);
    struct node *key = head;
    while(key!= NULL)
    {
        i++;
        if(key->data == n)
        {
            printf("The data %d found at position %d \n\n",n,i);
            break;
        }
        key = key->next;
        if(key == NULL)
        {
            printf("Element not found.\n\n");
        }
    } 
}

void insert_after_given_data()
{
    int dafter,newinfo;
    printf("Enter the data where new data will be stored(after)");
    scanf("%d",&dafter);
    printf("Enter data of the new node");
    scanf("%d",&newinfo);
    struct node *temp = head,*new;
    new = (struct node *)malloc (sizeof(struct node));
    new->data = newinfo;
    new->next = NULL;
    while(temp!= NULL)
    {
        if(temp->data == dafter)
        {
            new->next = temp->next;
            temp->next = new;
            break;
        }
        temp = temp->next;
        if(temp == NULL)
        {
            printf("No data is found");
        }
    }
}

void sorting()
{

    struct node *prv= head,*ptr;
    while(prv != NULL)
    {
        ptr = prv->next;
        while(ptr != NULL)
        {
            if(prv->data > ptr->data)
            {
                int temp = prv->data;
                prv->data = ptr->data;
                ptr->data = temp;
            }
            ptr = ptr->next;
        }
        prv = prv ->next;
    }
    printf("After sorting the list : \n");
    display();
}

int main()      
{
    int ch,no;
    while(1)
    {
    printf("1 : To create a list.\n2 : To see the list\n3 : To insert data at the begining.\n");
printf("4 : To insert data at end.\n5 : To insert any position.\n6 : To del at last\n7 : del at beg.\n");
    printf("8 : To del at any pos.\n9 : Traverse(display)\n10 : Reverse\n11 : Search\n");
    printf("12 : Insert_after_given_data\n13 : sorting \n\n");
    
  
    printf("Enter your choice\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 :
        printf("Enter the number of nodes : ");
        scanf("%d",&no);
        create(no);
        break;

        case 2 : 
        display();
        break;

        case 3 :{
        insertAtFront();
        display();
        }
        break;

        case 4 :
        insertAtEnd();
        break;

        case 5 :
        insertAtPosition();
        break;

        case 6 : 
        delatlast();
        display();
        break;

        case 7 : 
        delat_beg();
        break;

        case 8 :
        del_anypos();
        display();
        break;

        case 9 :
        traverse();
        break;

        case 10 : 
        rev(no);
        break;

        case 11 :
        search();
        break;

        case 12 :
        insert_after_given_data();
        break;

        case 13 : 
        sorting();
        break;

        default : 
        printf("Good Day !!!\n");

    }
    }
}