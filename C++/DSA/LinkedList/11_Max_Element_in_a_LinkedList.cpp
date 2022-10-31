#include<iostream>
using namespace std;

struct Node{
    int Data;
    struct Node *Next;
}*first=NULL; //Global Pointer
typedef struct Node Node;

//create a linkedlist using a array
void create(int A[],int n){
    int i=0;
    Node *temp, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->Data = A[i];
    first->Next = NULL;
    last = first;
    for(int i=1;i<n;i++){
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->Data = A[i];
        temp->Next = NULL;
        last->Next = temp;
        last = temp;
    }
}

//find the max element
int Max(Node* p){
    int max = INT32_MIN;
    while(p->Next != 0){
        if(p->Data > max){
            max = p->Data;
        }
        p = p->Next;
    }
    return max;
}

//find the max element using recusrion
int RMax(Node* p){
    if(p == 0){
        return 0;
    }
    int max = RMax(p->Next);
    if(max > p->Data){
        return max;
    }
    else{
        return p->Data;
    }
}

int main(){
    int max,rmax;
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    create(a,(sizeof(a)/sizeof(a[0])));
    max = Max(first);
    rmax = RMax(first);
    cout << max << endl;
    cout << rmax << endl;
    return 0;
}