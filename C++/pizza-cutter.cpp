//ieee extreme 2022 solved code for pizza cutter
#include <iostream>

using namespace std;

int main() {
    int n,d[180],T,i,j,x,y;
    cin >> T;
    
    for(i=0;i<T;i++){
        cin >> n;
        if(n==0)
            cout<<1<<endl;
        else if (n==1)
            cout<<2<<endl;
        else{
            for(j=0;j<180;j++){
                d[j]= 0;
            }
            for(j=0;j<n;j++){
                cin>>x;
                y = x%180;
                if (y < 0)
                    y=180+y;
                d[y]=1;
            } 
            x=0;
            for(j=0;j<180;j++){
                if(d[j]== 1)
                    x++;
            }
            cout << x*2<<endl;
        }
    }   
    return 0;
}
