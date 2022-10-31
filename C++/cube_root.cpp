#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int number, result;
  cout << "Enter any number : ";
  cin >> number;
  result = pow(number, 1.0/3.0);
  cout << "\nCube root of " << number << " is: " << result;
}
