#include<iostream>
using namespace std;

int main(){
    char n[]="abEcilQW12";
    char v[]="aeiouAEIOU";
    char d[]="0123456789";
    int vc=0,cc=0,oc=0;//vowel counter , consonant counter, other counter
    for(int i=0;n[i]!='\0';i++){
       for(int j=0;j<10;j++){
           if(n[i]==v[j]){ vc++;break;}
           else if(n[i]==d[j]){ oc++;break;}
           cc= sizeof(n)-(vc+oc)-1;
       }
    }
    cout<<"Vowels: "<<vc<<"\nconsonants: "<<cc<<"\nOther: "<<oc;
}