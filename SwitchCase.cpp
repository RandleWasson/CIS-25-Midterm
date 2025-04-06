#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	char operation;

	// Take input from the user
	cout << "Enter first number: ";
	cin >> num1;

	cout << "Enter an operator (+, -, *, /): ";
	cin >> operation;

	cout << "Enter second number: ";
	cin >> num2;

	// Perform calculation based on the operator using a switch case
	switch (operation) {
		case '+':
			cout << "Result: " << num1 + num2 << endl;
			break;
		case '-':
			cout << "Result: " << num1 - num2 << endl;
			break;
		case '*':
			cout << "Result: " << num1 * num2 << endl;
			break;
		case '/':
			// Check for division by zero
			if (num2 != 0) {
				cout << "Result: " << num1 / num2 << endl;
			}
			else {
				cout << "Error! Divison by zero." << endl;
			}
			break;
		default:
			cout << "Invalid operator!" << endl;
	}

	return 0;
}