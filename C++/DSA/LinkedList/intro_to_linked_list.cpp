#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

int main(){
    struct node *ptr;
    ptr = new node;
    ptr->data = 69;
    ptr->next = NULL;
    cout<<ptr->data<<endl<<ptr->next;
}