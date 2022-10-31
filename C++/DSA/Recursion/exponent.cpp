//to find power of a number
#include<iostream>
using namespace std;

//this function will take more steps to complete
int pow(int m,int n){
    if(n==0) return 1;
    else return pow(m,n-1)*m;
}

//this function will work in lesser steps
int pow2(int m,int n){
    if(n==0) return 1;
    if(n%2==0) return pow2(m*m,n/2);
    else return m*pow(m*m,(n-1)/2);
}

int main(){
    int m,n;
    cout<<"Enter N and power: ";
    cin>>m>>n;
    int res = pow(m,n);
    cout<<"Result 1: "<<res<<endl;
    int res2 = pow2(m,n);
    cout<<"Result 2: "<<res2;
    return 0;
}