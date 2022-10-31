// C program to find union,intersection and difference of two sets of integers using linked lists
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct Node                     // Linked list node
{
    int data;
    struct Node* next;
};
void sortList(struct Node* header)//Function to sort list in ascending order
{
    //Node current will point to head
    struct Node *current = header, *index = NULL;
    int temp;  
    if(header == NULL)
    {
        return;
    }
    else
    {
        while(current != NULL)
        {
            //Node index will point to node next to current
            index = current->next;
              
            while(index != NULL)
            {
                //If current node's data is greater than index's node data, swap the data between them
                if(current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

//function to insert a node at the beginning of a linked list
void push(struct Node** header, int new_data)
{
    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));//allocate node
    new_node->data = new_data;//inserts data into the node
    new_node->next = (*header);// link the old list off the new node
    (*header) = new_node;// move the header to point to the new node
    printf("\nEntry successful.");
    
}
// function that returns true if data is present in linked list else return false
bool isPresent(struct Node* head, int data)
{
    struct Node* t = head;
    while (t != NULL)
    {
        if (t->data == data)
            return true;
        t = t->next;
    }
    return false;
}
struct Node* getUnion(struct Node* head1,struct Node* head2)//function to get union of two linked lists
{
    struct Node* result = NULL;
    struct Node *t1 = head1, *t2 = head2;
    while (t1 != NULL)// Insert all elements of first linked list to the result list
    {
        push(&result, t1->data);
        t1 = t1->next;
    }
    while (t2 != NULL)// Insert those elements of second linked list which are not present in result list
    {
        if (!isPresent(result, t2->data))
            push(&result, t2->data);
        t2 = t2->next;
    }
    sortList(result);
    return result;
}
// Function to get intersection of two linked lists
struct Node* getIntersection(struct Node* head1,struct Node* head2)
{
    struct Node* result = NULL;
    struct Node* t1 = head1;
    /* Traverse first list and search each element of it in second list. If the element is present in second list, then insert the element to result*/
    while (t1 != NULL)
    {
        if (isPresent(head2, t1->data))
            push(&result, t1->data);
        t1 = t1->next;
    }
    sortList(result);
    return result;
    return NULL;
}

//Function to get differene of two linked lists
struct Node* getDifference(struct Node* head1,struct Node* head2)
{
    struct Node* result = NULL;
    struct Node *t1 = head1, *t2 = head2;
    /*Traverse both lists until one of them is NULL.If second list is NULL,copy the first list to result list.Insert elements which are present in first list and not in second list to result*/
    while ((t1 != NULL))
    {
        if (!isPresent(head2, t1->data))
            push(&result, t1->data);
        t1 = t1->next;
    }
    sortList(result);
    return result;
    return NULL;

}
// function to print a linked list
void printList(struct Node* node)
{
    sortList(node);
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

//Driver program
int main()
{
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    struct Node* Intersection = NULL;
    struct Node* Union = NULL;
    struct Node* Difference=NULL;
    int choice,data;
    do
    {
    printf("\n\n\t\tOPERATIONS\n\t1.Insert to the first set\n\t2.Insert to the second set\n\t3.Union of sets\n\t4.Intersection of sets\n\t5.Difference of sets\n\t6.Exit\nEnter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:  printf("\nEnter data to be pushed:");
                scanf("%d",&data);
                push(&head1, data);
                break;
        case 2:  printf("\nEnter data to be pushed:");
                scanf("%d",&data);
                push(&head2, data);
                break;
        case 3:  Union = getUnion(head1, head2);
                printf("\n First list\n");
                printList(head1);
                printf("\n Second listn");
                printList(head2);
                printf("\n Union list\n");
                printList(Union);
                break;
        case 4: Intersection = getIntersection(head1, head2);
                printf("\n First list\n");
                printList(head1);
                printf("\n Second list\n");
                printList(head2);
                if(Intersection!=NULL)
                {
                printf("\n Intersection list\n");
                printList(Intersection);
                }
                else
                    printf("\nIntersection is NULL set.");
                break;
        case 5: Difference = getDifference(head1, head2);
                printf("\n First list\n");
                printList(head1);
                printf("\n Second list\n");
                printList(head2);
                if(Difference!=NULL)
                {
                printf("\n Difference list\n");
                printList(Difference);
                }
                else
                    printf("\nDifference is a NULL set.");
                break;
        case 6: exit(0);
        default:printf("\nInvalid choice!!");
    }
}while(choice!=6);
    return 0;
}