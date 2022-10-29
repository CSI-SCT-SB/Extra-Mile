// C program to demonstrate whether
// a number is Neon number or not
#include <stdio.h>

int Check_Neon_Number(int num) {

	// Calculating the square of the number
	int square = num * num;

	// Copying the square in a variable
	// to extract the digit
	int n = square;

	// Declaring a variable to store the digits
	int digit;

	// Initializing a variable to
	// calculate the sum of digits
	int sum = 0;

	// To calculate the sum of digits
	while (n != 0) {

		// Extracting the digit
		digit = n % 10;
		sum = sum + digit;
		n = n / 10;
	}

	// Checking the condition of a Neon Number
	if (sum == num)
		return 1; // If condition is true.
	else
		return 0; // If condition is false.
}

// Driver Code
int main()
{
	int num = 9;

	// Calling the function
	int ans = Check_Neon_Number(num);
	if (ans == 1)

		// The number is Neon
		printf("true");
	else

		// The number is not Neon
		printf("false");
	return 0;
}
