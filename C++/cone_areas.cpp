#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double r,h,a;
    cout<<"enter the radius="<<endl;
    cin>>r;
     cout<<"enter the hight="<<endl;
    cin>>h;
    if (r==0 || h==0)
    {
             cout<<"invalid operation"<<endl;
             
             }
    if(r!=0 && h!=0)
    {
            a=(3.14*r*r*h)/3;
            cout<<"the area="<<a<<endl;
            }    
            system("pause");
            return 0;
            
            
    }