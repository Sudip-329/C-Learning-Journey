// C program for the all operations in
// the Singly Linked List
#include <stdio.h>
#include <stdlib.h>
// Linked List Node
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;

// Function to create list with n nodes initially
void createList()
{
    if (start == NULL)
    {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0)
        {
            int data;
            struct node *newnode;
            struct node *temp;
            newnode = malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("\nEnter number to"
                   " be inserted : ");
            scanf("%d", &data);
            start->info = data;

            for (int i = 2; i <= n; i++)
            {
                newnode = malloc(sizeof(struct node));
                temp->next = newnode;
                printf("\nEnter number to"
                       " be inserted : ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->next;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}

// Function to traverse the linked list
void traverse()
{
    struct node *temp;

    // List is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Else print the LL
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->info);
            temp = temp->next;
        }
    }
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->info = data;

    // Pointer of temp will be
    // assigned to start
    temp->next = start;
    start = temp;
}

// Function to insert at the end of
// the linked list
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));

    // Enter the number
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);

    // Changes links
    temp->next = 0;
    temp->info = data;
    head = start;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
}

// Function to insert at any specified
// position in the linked list
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));

    // Enter the position and data
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);

    // Change Links
    temp = start;
    newnode->info = data;
    newnode->next = 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
// Driver Code
int main()
{
    int choice;
    while (1)
    {

        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at starting\n");
        printf("\t3 For insertion at end\n");
        printf("\t4 For insertion at any position\n");
        printf("\t5 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse();
            printf("------------------------------------------");
            break;
        case 2:
            insertAtFront();
            printf("------------------------------------------");
            break;
        case 3:
            insertAtEnd();
            printf("------------------------------------------");
            break;
        case 4:
            insertAtPosition();
            printf("------------------------------------------");
            break;
        case 5:
            exit(1);
            printf("------------------------------------------");
            break;
        case 6:
            createList();
            break;
        default:
            printf("Incorrect Choice\n");
            printf("------------------------------------------");
        }
    }
    return 0;
}
