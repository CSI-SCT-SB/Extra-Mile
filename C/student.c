#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
int data;
struct node *next;
struct node *prev;
}node;
node *head;


void insertion_last()  
{  
    node *ptr,*temp;  
   int item;  
   ptr = ( node *) malloc(sizeof( node));  
       
       printf("\nEnter the value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head==NULL)  
       {  
           head = ptr;  
           ptr -> next = head;   
           ptr -> prev = head;   
       }  
       else  
       {  
          temp = head;  
          while(temp->next !=head)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          head -> prev = ptr;  
          ptr -> next = head;  
        }    
     printf("\nData inserted\n");  
}  
void deletion_last()  
{  
     node *ptr;  
    if(head == NULL)  
    {  
        printf("\n list Empty");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);   
        printf("\nData deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != head)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = head;  
        head -> prev = ptr -> prev;    
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
} 
void display()  
{  
    struct node *ptr;  
    ptr=head; 
    int i=0; 
    if(head == NULL)  
    {  
        printf("\nList empty");  
    }     
    else  
    {  
        printf("%d\n", ptr -> data);
        while(i!=3){
            printf("\n Press 1.Next Student \n       2.Previous Student\n       3.Exit") ;
            scanf("%d",&i);
            if(i==1){ 
             ptr = ptr -> next;
               printf("%d\n", ptr -> data);
               }
            else if(i==2){
                 ptr=ptr->prev;
                 printf("%d\n", ptr -> data);
             }
            else if(i==3){
            }
            else{
                printf("Invalid data");
            }

        }      
          
    }  
              
}   
/*void search()
{
    node *ptr=head;
    char temp[12];
    printf("Enter the name");
    scanf("%s",temp);
    while (ptr->next!=head)
    {
        if(strcmp(temp,ptr->FIRST))
        {
            printf("%s is found",temp);
            //output(ptr);
        }
        ptr=ptr->next;
    }
    
}*/
int main()
{
     head=NULL;
     int i=0;
     while(i!=5)
     {
     printf("\nPress 1.Insert Student Data \n      2.Delete Student data \n      3.Display Student data \n      4.Search a Student  \n     5.Exit\n");
     scanf("%d",&i);
     if(i==1){
        insertion_last();
     }
     else if(i==2){
    deletion_last();
     }
     else if(i==3){
        display();
     }
     else if(i==4){
        // search();
     }
     else if(i==5){
       }
       else{
           printf("\n Invalid Input");
       }
     }
}