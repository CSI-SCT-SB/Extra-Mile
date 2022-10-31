#include<iostream>
using namespace std;

void merge(int a[],int b[],int c[]){
    int i,j,k;
    i=j=k=0;
    while(i<5 && j<5){
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    for(;i<5;i++) 
        c[k++] = a[i++];
    for(;j<5;j++) 
        c[k++] = b[j++];
}

int main(){
    int a[]={0,2,4,6,8},b[]={1,3,5,7,9},c[10]={0};
    merge(a,b,c);
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}