#include <iostream>
using namespace std;

int main()

{

	float c;

	cout << "Enter temperature in Celsius\n";	//inputting the temperature

	cin >> c;

	float f = (9 *c) / 5;	//calculating the first part of the formula

	f += 32;	//calculating the remaining part

	cout << "temperature in Fahrenheit:" << f;	//printing the calculated

}