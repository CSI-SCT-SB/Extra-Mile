#include<iostream>
using namespace std;

int validate(char *ptr){
    for(int i=0;ptr[i]!='\0';i++){
        if(!(ptr[i]>=65 && ptr[i]<=90) && !(ptr[i]>=97 && ptr[i]<=122) && !(ptr[i]>=48 && ptr[i]<=57)){
            return 0;
        }
    }
    return 1;
}

int main(){
    char *pass="password123";
    if(validate(pass)){
        cout<<"Valid String";
    }else{
        cout<<"Invalid String";
    }
}