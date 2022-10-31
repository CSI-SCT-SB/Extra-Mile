#include <iostream>

#include <string>

using namespace std;

 

void lower_str(string str)

{

for(int i=0;i<=str.length();i++)

{

if (str[i] >= ‘A’ && str[i] <= ‘Z’)    

str[i] = str[i] + 32;   //converting upper tolowercase }

cout<<“\n The string in lower case: “<< str;

}

 

void upper_str(string str)

{

for(int i=0;str[i]!=‘\0’;i++)      //’\0’ stands for null

 

{

if (str[i] >= ‘a’ && str[i] <= ‘z’)   

str[i] = str[i] – 32;   //converting lower touppercase

}

cout<<“\n The string in upper case: “<< str;

}

 

int main()

{

string str;

      cout<<“Enter the string: “;

      getline(cin,str);

      lower_str(str);       //function call to convert to lowercase

      upper_str(str);   //function call to convert to uppercase

return 0;

}