#include <iostream>
#include <string> // For using strings

int main() {
	std::string name;
	int age;
	double favoriteNumber;

	// Prompt the user for their name, age, and favoirte number
	std::cout << "Enter your name: ";
	std:getline(std::cin, name); // Using getline to accept full name with spaces

	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << "Enter your favorite number: ";
	std::cin >> favoriteNumber;

	// Output the user's input in a formatted way
	std::cout << "\nHello, " << name << "!\n";
	std::cout << "You are " << age << " years old.\n";
	std::cout << "Your favorite number is " << favoriteNumber << ".\n";

	return 0;
}