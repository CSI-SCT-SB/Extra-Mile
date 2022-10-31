//program to write reverse a array, left shift operation, left rotate operation
#include<iostream>
using namespace std;

void reverse(int a[]){
    int temp=0;
    for(int i=0,j=9;i<5;i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void Lshift(int a[]){
    for(int i=0,j=1;j<10;i++,j++){
        a[i] = a[j];
    }
    a[9]=0;
}

void Lrotate(int a[]){
    int temp = a[0];
    for(int i=0,j=1;j<10;i++,j++){
        a[i] = a[j];
    }
    a[9] = temp;
}

int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    //reverse(a);
    //Lshift(a);
    Lrotate(a);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}