#include <iostream>
#include <cmath> // For sqrt() function

bool isPrime(int n) {
	// Check if the number is less than or equal to 1 (not prime)
	if (n <= 1) {
		return false;
	}

	// Check divisibility from 2 to the square root fo n
	for (int i = 2; i <= std::sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}

	// If no divisors are found, it's a prime number
	return true;
}

int main() {
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (isPrime(number)) {
		std::cout << number << " is a prime number.\n";
	}
	else {
		std::cout << number << " is not a prime number.\n";
	}

	return 0;
}