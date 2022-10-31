#include<iostream>
using namespace std;

int main(){
    char name[]="fedcba";
    char rev[7];
    int i=0;
    for(;name[i]!='\0';i++){}
    i-=1;
    int j=0;
    for(;i>0;i--,j++){
        rev[j]=name[i];
    }
    rev[j]='\0';
    cout<<rev;
}