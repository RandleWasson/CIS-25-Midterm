#include <iostream>

int main() {
	int arr[10];
	int i = 0;

	std::cout << "Enter 10 integers:" << std::endl;
	while (i < 10) {
		std::cin >> arr[i];
		i++;
	}

	std::cout << "Array elements are:" << std::endl;
	for (int j = 0; j < 10; j++) {
		std::cout << arr[j] << " ";
	}
	std::cout << std::endl;

	return 0;
}