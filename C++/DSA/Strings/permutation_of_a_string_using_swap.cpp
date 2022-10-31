#include<iostream>
using namespace std;

void perm(char s[],int l,int h){
    int i=0;
    if(l==h){
        cout<<s<<endl;
    }else{
        for(;s[i]!='\0';i++){
            int temp1=s[i];
            s[i]=s[l];
            s[l]=temp1;
            perm(s,l+1,h);
            int temp2=s[i];
            s[i]=s[l];
            s[l]=temp2;
        }
    }
}

int main(){
    char a[]="ABC";
    perm(a,0,3);
}