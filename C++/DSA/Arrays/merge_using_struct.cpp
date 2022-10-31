#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void merge(struct Array *arr1,struct Array *arr2,struct Array *arr3){
    int i,j,k;
    i=j=k=0;
    while(i<5 && j<5){
        if(arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for(;i<5;i++)
        arr3->A[k++] = arr1->A[i++];
    for(;j<5;i++)
        arr3->A[k++] = arr2->A[j++];
    arr3->length = arr1->length + arr2->length;
}

int main(){
    //Array intializations
    struct Array arr1={{0,2,4,6,8},20,5};
    struct Array arr2={{1,3,5,7,9},20,5};
    struct Array arr3={{0},20,0};
    //merge function
    merge(&arr1,&arr2,&arr3);
    cout<<"Merged Array: ";
    for(int i=0;i<arr3.length;i++){
        cout<<arr3.A[i]<<" ";
    }
    cout<<"\nArray length: "<<arr3.length;
    cout<<"\nArray size: "<<arr3.size;

    return 0;
}