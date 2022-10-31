#include <iostream>
#include <fstream>
using namespace std;

int main()

{
	fstream ob;

	ob.open("test.txt", ios::out);	//opening file in writing mode

	ob << "hello world\n";	//writing data to file

	ob << "this is my first file";

	ob.close();	//closing the file

	ob.open("test.txt", ios:: in);	//again opening the file but in reading mode

	while (!ob.eof())

	{
		string str;

		ob >> str;	//reading word by word from file and storing in str

		cout << str << "\n";	//printing str

	}

	ob.close();	//closing the file after use

	return 0;

}