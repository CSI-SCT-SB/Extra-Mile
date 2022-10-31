#include<iostream>
using namespace std;

int main(){
    char name[]="fedcba";
    char t;
    int i=0;
    for(;name[i]!='\0';i++){}
    i-=1;//bcoz \0 is also counted
    for(int j=0;j<i;j++,i--){
        t=name[j];
        name[j]=name[i];
        name[i]=t;
    }
    cout<<name;
}