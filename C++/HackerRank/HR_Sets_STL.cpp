#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int query=0,x=0;
        cin>>query>>x;
        if(query==1){
            s.insert(x);
        }
        else if(query==2){
            s.erase(x);
        }
        else if(query==3){
            set<int>::iterator it=s.find(x);
            if(it==s.end()){
                cout<<"No\n";
            }
            else{
                cout<<"Yes\n";
            }
        }
    }
}