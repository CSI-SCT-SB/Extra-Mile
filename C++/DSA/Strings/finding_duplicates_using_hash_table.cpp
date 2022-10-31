#include<iostream>
using namespace std;

int main(){
    char a[10]="aaabbcdef";
    int h[26]={0};
    for(int i=0;i<10;i++){
        h[a[i]-97]+=1;
    }
    for(int i=0;i<26;i++){
        if(h[i]>1){
            cout<<char(i+97)<<" ";
            cout<<h[i];
            cout<<endl;
        }
    }
    return 0;
}