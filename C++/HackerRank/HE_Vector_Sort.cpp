#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> a;    
    int length;
    cin>>length;
    for(int i=0;i<length;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<length;i++){
        cout<<a[i]<<" ";
    }
}