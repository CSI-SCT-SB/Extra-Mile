//to insert a element in a sorted array, check if a array is sorted,bring all -ves on left and +ves on right
#include<iostream>
using namespace std;

void insert(int a[],int x){
    for(int i=8;i>0;i--){
        if(x>a[i]){
            a[i+1] = x;
            return;
        }
        a[i+1] = a[i];
    }
}

void check(int a[]){
    for(int i=0;i<9;i++){
        if(a[i]>a[i+1]){
            cout<<"Array is not sorted\n";
            return;
        }
    }
    cout<<"Array is sorted\n";
}

void swap(int a[],int i1,int i2){
    int temp = a[i1];
    a[i1] = a[i2];
    a[i2] = temp;
}

void LR(int a[]){
    int i=0,j=9;
    while(i<j){
        while(a[i]<0){i++;}
        while(a[j]>=0){j--;}
        if(i<j){
            swap(a,i,j);
        }
    }
}

int main(){
    // int a[10]={2,4,8,16,32,64,128,512,1024};
    // insert(a,256);
    // check(a);
    int a[10]={0,-1,2,-3,4,-5,6,-7,8,-9};
    LR(a);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}