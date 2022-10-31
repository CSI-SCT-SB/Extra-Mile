#include<iostream>
using namespace std;

int main(){
    char name[]="ArunKumarRathod";
    for(int i=0;name[i]!='\0';i++){
        if(name[i]>=65 && name[i]<=90){
            name[i]+=32;
        }
        else if(name[i]>='a' && name[i]<=122){
            name[i]-=32;
        }
    }
    cout<<name;
}