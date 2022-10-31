#include<iostream>
using namespace std;

int main(){
    char name[10]={'j','o','h','n','\0'};
    char *s="welcome";
    int i=0,j=0;
    for(;name[i]!='\0';i++){ };
    for(;s[j]!='\0';j++){ };
    cout<<"Length of names: "<<i;
    cout<<"\nLength of s: "<<j;
    return 0;
}