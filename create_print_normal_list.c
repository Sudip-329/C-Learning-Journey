#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head = NULL, *tail = NULL;   
int main()
{
    int no,i;
    struct node *cur;
    printf("Enter no : ");
    scanf("%d",&no);

    printf("Enter data : \n");
    for(i=0; i<no; i++)
    {
        cur = (struct node*) malloc (sizeof(struct node));
        printf("Data %d : ",i+1);
        scanf("%d",&cur -> data);
        cur -> next = NULL;
        if(head == NULL)
        {
            head = tail = cur;
        }

        else
        {
            tail -> next = cur;
            tail = cur;
        }
    }

    for (head; head!=NULL; head=head->next)
    {
        printf("Data = %d | Address= %u | Next Address= %u\n", head->data, head, head->next);
    }
}