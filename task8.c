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

void printList(LIST* l1)
{
    NODE* temp = l1->head;
    printf("[HEAD] ->");
    for (int i=0; i<=(l1->count); i++)
    {
        printf(" %d ->", temp->ele);
        temp = temp->next;
    }
    printf(" [NULL]\n");
}

void rotate(LIST *l1, int k)
{
    NODE *temp = l1->head;
    NODE *prev = temp;
    // NODE *temp2 = temp->next;
    for(int j=0; j<=(l1->count); j++)
    {
        for(int i = 1; i<((l1->count)+1)-k; i++)
        {
            temp = temp->next;
        }
        prev->ele = temp->ele;
        prev = prev->next;
        temp = prev;
    }   
}

int main()
{
    LIST *l2 = createNewList();
    NODE *n1 = createNewNode(5);
    NODE *n2 =createNewNode(4);
    NODE *n3 = createNewNode(3);
    NODE *n4 = createNewNode(2);
    NODE *n5 = createNewNode(1);
    l2 = insertFirst(n1, l2);
    l2 = insertFirst(n2, l2);
    l2 = insertFirst(n3, l2);
    l2 = insertFirst(n4, l2);
    l2 = insertFirst(n5, l2);
    n1->next = l2->head;
    rotate(l2,2);
    // printf("%d", l2->count);
    printList(l2);
    
}