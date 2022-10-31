#include<iostream>
using namespace std;

void get(int a[],int index){
    if(index > 0 && index < 10)
        cout<<"Element at index "<<index<<" is: "<<a[index];
}

void set(int a[],int index,int element){
    for(int i=0;i<10;i++){
        if(i == index){
            a[i] = element;
        }
    }
    cout<<"index "<<index<<" element was set to "<<a[5];
}

void max(int a[]){
    int max = a[0];
    for(int i=1;i<10;i++){
        if(a[i] > max)
            max = a[i];
    }
    cout<<"Max element is "<<max;
}

void min(int a[]){
    int min = a[0];
    for(int i=1;i<10;i++){
        if(a[i] < min)
            min = a[i];
    }
    cout<<"Min element is "<<min;
}

void sum(int a[]){
    int sum=0;
    for(int i=0;i<10;i++)
        sum += a[i];
    cout<<"Sum is "<<sum;
}

void avg(int a[]){
    int sum=0;
    for(int i=0;i<10;i++)
        sum += a[i];
    cout<<"avg is "<<sum/10.0;
}

int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    //get(a,5);
    //set(a,5,15);
    //max(a);
    //min(a);
    //sum(a);
    avg(a);
    return 0;
}