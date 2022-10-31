#include<iostream>
using namespace std;

int main(){
    char a[8]="painter",b[8]="painter";
    int i=0,j=0;
    for(;a[i]!='\0' || b[j]!='\0';i++,j++){
        if(a[i]!=b[j]){ break; }
    }
    if(a[i]==b[j]){ cout<<"Equal";}
    else if(a[i]<b[j]){ cout<<"Smaller"; }
    else{ cout<<"Larger";}
}