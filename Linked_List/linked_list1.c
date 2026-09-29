#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void LinkedListTraversal(struct node* ptr)
{
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    struct node * head;
    struct node * seccond;
    struct node * third;
    

    // Allcoate the memory for nodes in the linked list in Heap
    head = (struct node * )malloc(sizeof(struct node ));
    seccond = (struct node * )malloc(sizeof(struct node ));
    third = (struct node * )malloc(sizeof(struct node ));

    
    head->data = 7;
    head->next = seccond;

    seccond->data = 11;
    seccond->next = third;

    third->data =21;
    third->next = NULL;

    LinkedListTraversal(head);
    return 0;
}