#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
}*first=NULL; //global pointer

//to create linkedlist from a array
void create(int A[],int n){
    int i=0;
    struct node *temp,*last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[i];
    first->next = NULL;
    last = first;
    for(i=1;i<5;i++){
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

//recursive printing a linkedlist
void print(struct node *p){
    if(p!=NULL){
        cout<<p->data;
        print(p->next);
    }
}

//reverse printing a linkedlist using recursion
void printrev(struct node *p){
    if(p!=NULL){
        printrev(p->next);
        cout<<p->data;
    }
}

int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    print(first);
    cout<<endl;
    printrev(first);
}