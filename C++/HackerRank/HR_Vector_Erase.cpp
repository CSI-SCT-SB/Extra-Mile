#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int r1,r2,r3;
    cin>>r1;
    cin>>r2>>r3;
    v.erase(v.begin()+(r1-1));
    v.erase(v.begin()+(r2-1),v.begin()+(r3-1));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    return 0;
}