//Sum of N natural numbers using recursion
#include<iostream>
using namespace std;

int recursion(int n,int sum){
    if(n>0){
        sum+=n;
        recursion(n-1,sum);
    }
    else{
        return sum;
    }
}

int main(){
    int n,sum=0;
    cout<<"Enter N:";
    cin>>n;
    int res = recursion(n,sum);
    cout<<"Result: "<<res;
    return 0;
}