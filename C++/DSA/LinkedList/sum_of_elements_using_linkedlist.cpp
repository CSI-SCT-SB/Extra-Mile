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

int add(struct node *p){
    int sum = 0;
    while(p){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

//recursive add
int radd(struct node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return radd(p->next)+p->data;
    }
}

int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    cout<<add(first)<<endl;
    cout<<radd(first);
}