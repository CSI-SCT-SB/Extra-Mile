#include<iostream>
using namespace std;

int main(){
    int no_of_arrays,no_of_queries;
    cin>>no_of_arrays>>no_of_queries;
    int* array[no_of_arrays];
    int query[no_of_queries][2];
    for(int i=0;i<no_of_arrays;i++){
        int length;
        cin>>length;
        array[i]=new int[length];
        for(int j=0;j<length;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<no_of_queries;i++){
        cin>>query[i][0]>>query[i][1];
    }
    for(int i=0;i<no_of_queries;i++){
        cout<<array[query[i][0]][query[i][1]]<<endl;
    }
    return 0;
}