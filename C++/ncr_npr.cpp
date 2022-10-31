#include <iostream>

long int factorial(int y)

{

	int i, fact = 1;

	for (i = 2; i <= y; i++)

	{

		fact = fact * i;
	}

	return fact;

}

int main()

{

	int n, r;

	long int ncr, npr;

	std::cout << "Enter the value of n : ";

	std::cin >> n;

	std::cout << "Enter the value of r : ";

	std::cin >> r;

	npr = factorial(n) / factorial(n - r);

	ncr = npr / factorial(r);

	std::cout << "NCR value = " << ncr;

	std::cout << "\nNPR value = " << npr;

	return 0;

}