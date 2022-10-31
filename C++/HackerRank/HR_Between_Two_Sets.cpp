//https://www.hackerrank.com/challenges/between-two-sets/problem
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>> n >> m;

    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    int count=0;
    for(int i = a[n-1]; i<=b[0]; i++){
        bool temp = true;
        for(int j=0; j<n; j++){
            if( i%a[j] != 0){ // <-- imp
                temp = false;
            }
        }
        for(int j=0; j<m; j++){
            if( b[j]%i != 0){ // <-- imp
                temp = false;
            }
        }
        if(temp) count++;
    }
    cout << count;
    return 0;
}