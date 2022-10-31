//program of combination formula
// nCr =  n!/r!(n-r)!
#include<iostream>
using namespace std;

int factorial(int x){
    if(x==0) return 1;
    return factorial(x-1)*x;
}

int nCr(int n,int r){
    int t1,t2,t3;
    t1 = factorial(n);
    t2 = factorial(r);
    t3 = factorial(n-r);
    return t1/(t2*t3);
}

int NCR(int n,int r){
    if(r==0 || r==n) return 1;
    return NCR(n-1,r-1) + NCR(n-1,r);
}

int main(){
    cout<<nCr(5,3)<<endl;
    cout<<NCR(5,3);
    return 0;
}