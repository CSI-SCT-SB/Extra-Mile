#include<iostream>
#include<string>
using namespace std;

struct student{
    int age;
    string fname;
    string lname;
    int standard;
};

int main(){
    student s1;
    cin>>s1.age>>s1.fname>>s1.lname>>s1.standard;
    cout<<s1.age<<" "<<s1.fname<<" "<<s1.lname<<" "<<s1.standard;
}