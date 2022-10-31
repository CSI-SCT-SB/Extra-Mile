#include<iostream>
using namespace std;

void perm(char s[],int k){
    static char a[10]={0};
    static char res[10];
    int i=0;
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<endl;
    }else{
        for(;s[i]!='\0';i++){
            res[k]=s[i];
            a[i]=1;
            perm(s,k+1);
            a[i]=0;
        }
    }
}

int main(){
    char arr[]="abc";
    perm(arr,0);
    return 0;
}