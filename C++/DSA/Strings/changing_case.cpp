#include<iostream>
using namespace std;

/*an uppercase letter can be converted to a lower case letter by add-ing it with 32
and similarly we can convert a lowercse to uppercase by minus-ing 32 from it*/
int main(){
    char name[]="ARUN";
    for(int i=0;name[i]!='\0';i++){
        name[i]=name[i]+32;
    }
    cout<<name;
    return 0;
}