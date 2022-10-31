#include<iostream>
using namespace std;

int main(){
    char n[]="abEcilQW12";
    int vc=0,cc=0,oc=0;//vowel counter , consonant counter, other counter
    for(int i=0;n[i]!='\0';i++){
        if(n[i]=='a'||n[i]=='A'||n[i]=='e'||n[i]=='E'||n[i]=='i'||n[i]=='I'||n[i]=='o'||n[i]=='O'||n[i]=='u'||n[i]=='U'){
            vc++;
        }
        else if(n[i]>=65 && n[i]<=90 || n[i]>=97 && n[i]<=122){ cc++; }
        else{ oc++; }
    }
    cout<<"Vowels: "<<vc<<"\nconsonants: "<<cc<<"\nOther: "<<oc;
}