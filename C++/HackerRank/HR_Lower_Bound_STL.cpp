#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cin>>m;
    int array[m];
    for(int i=0;i<m;i++){
        cin>>array[i];
    }
    for(int i=0;i<m;i++){
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), array[i]);
        if(v[low-v.begin()]==array[i]){
           cout<<"Yes "<<(low-v.begin()+1)<<endl;
        }
        else{
           cout<<"No "<<(low-v.begin()+1)<<endl;
        }
    }
    return 0;
}