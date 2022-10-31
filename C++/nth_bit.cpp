#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()

{
	int num, n;

	cout << "Enter number\n";

	cin >> num;

	cout << "Enter bit number you wish to obtain\n";

	cin >> n;

	cout << "Answer:" << (1 &(num >> (n - 1)));

}