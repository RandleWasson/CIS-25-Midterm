#include <iostream>
using namespace std;

int main() {
	int number = 10;
	if (number == 20) { // Didn't have a comparison (==)
		cout << "number is 20" << endl;
	}
	else {
		cout << "number is not 20" << endl;
	}

	for (int i = 0; i <= 5; i++) { // Remove semicolon
		cout << i << endl;
	}

	return 0;
}