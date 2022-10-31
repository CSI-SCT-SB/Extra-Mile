#include<iostream>
#include <sstream>
using namespace std;

int main(){
    stringstream ss("23,4,56");
    char ch;
    int a, b, c;
    ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
    cout<<a<<ch<<b<<ch<<c;
}