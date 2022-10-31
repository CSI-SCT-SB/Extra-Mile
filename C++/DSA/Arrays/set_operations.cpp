/*program to perform set operations(union,intersection,set difference)*/
#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

// //for sorted array
void setunion(struct Array *arr1,struct Array *arr2,struct Array *uni){
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i] < arr2->A[j])
            uni->A[k++] = arr1->A[i++];
        else if(arr2->A[j] < arr1->A[i])
            uni->A[k++] = arr2->A[j++];
        else{
            uni->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        uni->A[k++] = arr1->A[i++];
    for(;j<arr2->length;j++)
        uni->A[k++] = arr2->A[j++];
    uni->size = 20;
    uni->length = k;
}

//intersection
void set_intersection(struct Array *arr1,struct Array *arr2,struct Array *insect){
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i] < arr2->A[j])
            i++;
        else if(arr2->A[j] < arr1->A[i])
            j++;
        else{
            insect->A[k++] = arr1->A[i++];
            j++;
        }
    }
    insect->size = 20;
    insect->length = k;
}

//set difference
void set_difference(struct Array *arr1,struct Array *arr2,struct Array *diff){
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i] < arr2->A[j])
            diff->A[k++] = arr1->A[i++];
        else if(arr2->A[j] < arr1->A[i])
            j++;
        else{
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++)
        diff->A[k++] = arr1->A[i++];
    diff->size = 20;
    diff->length = k;
}

int main(){
    //structure intializations
    struct Array arr1={{2,6,10,15,25},20,5};
    struct Array arr2={{3,6,7,15,20},20,5};
    struct Array uni={{0},20,0};
    struct Array insect={{0},20,0};
    struct Array diff={{0},20,0};
    //Set Operations
    setunion(&arr1,&arr2,&uni);
    set_intersection(&arr1,&arr2,&insect);
    set_difference(&arr1,&arr2,&diff);
    //printing values
    for(int i=0;i<diff.length;i++){
        cout<<diff.A[i]<<" ";
    }
    return 0;
}