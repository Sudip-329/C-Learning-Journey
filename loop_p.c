#include<stdio.h>

void create()  //Function to create a node;
{
    int no;

    printf("Enter the number of nodes : ");
    scanf("%d",&no);

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
}

int main()
{
    create();
    temp = head;
    while(temp -> next!=NULL)
    {
        if(temp->flag ==0)
        {
            flag 1;
        }
        else
        {
            break;
        }
        if(temp ->flag == 1)
        {
            printf("Loop present");
        }
    }
}