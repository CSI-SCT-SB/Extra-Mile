#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,choice,marks;
    cin>>n;
    string name;
    map<string,int>m;
    for(int i=0;i<n;i++){
        cin>>choice>>name;
        if(choice==1){
            cin>>marks;
            m[name] +=marks;
        }
        else if(choice==2){
            m.erase(name);
        }
        else{
            cout<<m[name]<<"\n";
        }
    }
    return 0;
}