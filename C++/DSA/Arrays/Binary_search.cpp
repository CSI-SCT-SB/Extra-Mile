//Binary search program
#include<iostream>
using namespace std;

//using while loop
int bin_srch(int a[],int key, int low, int high){
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid] == key) return mid;
        else if(a[mid] < key) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

//using recursion
int rbin_srch(int a[],int key,int low,int high){
    int mid = (low+high)/2;
    if(low<=high){
        if(a[mid] == key) return mid;
        else if(a[mid] < key) return rbin_srch(a,key,mid+1,high);
        else return rbin_srch(a,key,low,mid-1);
    }
    return -1;
}

int main(){
    int array[10]={0,12,28,36,43,52,69,76,88,96};
    cout<<"ELement found at index: "<<bin_srch(array,96,0,10) << endl; //using while
    cout<<"ELement found at index: "<<rbin_srch(array,76,0,10); //using recursion
    return 0;
}