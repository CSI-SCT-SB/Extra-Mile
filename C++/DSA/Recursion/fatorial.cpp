#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}

int main(){
    int n,fact=1;
    cout<<"Enter N:";
    cin>>n;
    int res = factorial(n);
    cout<<"Result: "<<res;
    return 0;
}