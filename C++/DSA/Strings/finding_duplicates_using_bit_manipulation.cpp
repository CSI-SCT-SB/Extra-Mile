#include<iostream>
using namespace std;

int main(){
    char a[]="arunkumarrathod";
    int h=0,x=0;
    for(int i=0;a[i]!='\0';i++){
        x=1;
        x = x<<(a[i]-97);
        if((x&h) > 0){ //imp logic x&h paranthesis are imp
            cout<<a[i]<<" is duplicate\n";
        }else{
            h=h|x;
        }
    }
    return 0;
}