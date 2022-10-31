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

int count(struct node *p){
    int c=0;//counter
    while(p!=NULL){
        c++;
        p = p->next;
    }
    return c;
}

//recursive count
int rcount(struct node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return rcount(p->next)+1;
    }
}

int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    cout<<count(first)<<endl;
    cout<<rcount(first)<<endl;
}