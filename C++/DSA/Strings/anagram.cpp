#include<iostream>
using namespace std;

int main(){
    char a[]="medical",b[]="decimal";
    int h[26]={0};
    for(int i=0;a[i]!='\0';i++){
        h[a[i]-97]+=1;
    }
    int i=0;
    for(;b[i]!='\0';i++){
        h[b[i]-97]-=1;
        if(h[b[i]-97]<0){
            cout<<"Not a anagram";
            break;
        }
    }
    if(b[i]=='\0'){
        cout<<"its a anagram";
    }
}