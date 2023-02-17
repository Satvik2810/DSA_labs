#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int ele;
    struct node *next;
} NODE;

typedef struct linked_list
{
    int count;
    NODE *head;
} LIST;

LIST *createNewList()
{
    LIST *myList;
    myList = (LIST *)malloc(sizeof(struct linked_list));
    myList->count = 0;
    myList->head = NULL;
    return myList;
}
NODE *createNewNode(int value)
{
    NODE *myNode;
    myNode = (NODE *)malloc(sizeof(struct node));
    myNode->ele = value;
    myNode->next = NULL;
    return myNode;
}
void insertAfter(int searchEle, NODE *n1, LIST *l1)
{
    if (l1->head == NULL)
    {
        l1->head = n1;
        n1->next = NULL;
        l1->count++;
    }
    else
    {
        NODE *temp = l1->head;
        NODE *prev = temp;
        while (temp != NULL)
        {
            if (temp->ele == searchEle)
                break;
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            printf("Element not found\n");
            return;
        }
        else
        {
            if (temp->next == NULL)
            {

                temp->next = n1;
                n1->next = NULL;
                l1->count++;
            }
            else
            {
                prev = temp;
                temp = temp->next;
                prev->next = n1;
                n1->next = temp;
                l1->count++;
            }
            return;
        }
    }
    return;
}
void printList(LIST* l1)
{
    NODE* temp = l1->head;
    printf("[HEAD] ->");
    while (temp != NULL)
    {
        printf(" %d ->", temp->ele);
        temp = temp->next;
    }
    printf(" [NULL]\n");
}

int deleteAt(int searchEle, LIST* l1)
{
    NODE *temp = l1->head;
    NODE *prev;
    if(l1->head == NULL)
    {
        printf("Empty linked list, no elements to delete.");
        return 0;
    }
    while(temp != NULL)
    {
        if(temp->ele == searchEle) break;
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    temp->next = NULL;
    l1->count--;
    return 0;
}

LIST *insertFirst(NODE *n1, LIST *l1)
{
    // LIST *myList;
    NODE *temp = l1->head;
    NODE *prev;
    if(temp == NULL)
    {
        l1->head = n1;
        n1->next = NULL;
        return l1;
    }
    else
    {
        prev = temp;
        l1->head = n1;
        n1->next = prev;
    }
    l1->count++;
    return l1;
}

LIST *deleteFirst(LIST *l1)
{
    NODE *temp = l1->head;
    NODE *prev;
    if(temp == NULL)
    {
        printf("No elements to delete, empty linekd list.");
        return l1;
    }
    else
    {
        prev = temp;
        l1->head = temp->next;
        prev->next = NULL;
        l1->count--;
        return l1;
    }
}

int search(int searchEle, LIST *l1)
{
    NODE *temp = l1->head;
    NODE *prev;
    if(temp == NULL)
    {
        printf("Empty linked list.");
        return 2;
    }
    while(temp != NULL)
    {
        int posn = 1;
        if(temp->ele == searchEle)
        {
            printf("element found");
            return posn;
        }
        temp = temp->next;
        posn++;
        if(temp == NULL)
        {
            printf("element not found");
            return -1;
        }
    }
}