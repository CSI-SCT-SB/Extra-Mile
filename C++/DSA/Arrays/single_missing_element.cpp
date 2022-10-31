#include<iostream>
using namespace std;

//void unsorted();

int sorted(int arr[],int n){
    int total = (n*(n+1))/2;
    int sum = 0;
    for(int i=0;i<10;i++)
        sum += arr[i];
    int missing_element = total - sum;
    return missing_element;
}


int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int arr1 = sorted(array,11);
    if(arr1) cout<<"Missing element is: "<<arr1;
    else cout<<"\nCouldnt find missing element";
    return 0;
}