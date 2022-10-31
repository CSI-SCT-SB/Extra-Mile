#include<iostream>
#include<cmath>
using namespace std;

/*int main()
{
	int num;
	cin>>num;
	try
	{
		if(num<0)
		throw 2;
		cout<<sqrt(num);
	}
	catch(int i)
	{
		cout<<"square root of negative number does not exist";
	}
	return 0;
}*/
/*int main()
{
	int age;
	cin>>age;
	try
	{
		if(age>18)
		cout<<"eligible";
		else if(age>0 && age<18)
		throw 10;
		else if(age<0)
		throw 'e';
	}
	catch(...)
	{
		cout<<"invalide age";
	}
	return 0;
}*/
/*int main()
{
	float a[3][3],b[3][3];
	int s,k,l,m,i,j,sum[3][3];
	cin>>s>>k>>l>>m;
	a[s][k];
	b[l][m];
	for(i=0;i<s;i++)
	{
		for(j=0;j<k;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	}
	try
	{
		if(s==l && k==m)
		{
			for(i=0;i<s;i++)
			{
				for(j=0;j<k;j++)
				{
					sum[i][j]=a[i][j] + b[i][j];
					cout<<sum[i][j]<<" ";
				}
				cout<<endl;
			}
		}
	
		
		else if(s!=l || k!=m)
		{
			throw 10;
		}
	}
	catch(int i)
	{
		cout<<"there order is not same";
	}
	
	return 0;
}*/
void fun()
{
	try
	{
		throw 10;
	}
	catch(int i)
	{
		cout<<"exception is thrown to int main()\n";
		throw;
	}
}
int main()
{
	cout<<"start\n";
	try
	{
		fun();
	}
	catch(int u)
	{
		cout<<"rethrown exception is caught\n";
	}
	cout<<"end";
	return 0;
}
