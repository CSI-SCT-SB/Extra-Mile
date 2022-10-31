#include<iostream>
using namespace std;

int main(){
    char a[7]="tabbat";
    char b[7];
    int i=0,j=0;
    for(;a[i]!='\0';i++){ }
    i-=1;
    for(;i>=0;i--,j++){ //reversing and copying the string to new array
        b[j]=a[i];
    }
    b[j]='\0';
    for(i=0,j=0;a[i]!='\0' || b[j]!='\0';i++,j++){ //comparing strings
        if(a[i]!=b[j]){
            break;
        }
    }
    if(a[i]==b[j]){ cout<<"Its a Plaindrome"; }
    else{ cout<<"Its not a Plaindrome"; }
    return 0;
}