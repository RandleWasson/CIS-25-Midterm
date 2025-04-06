#include <iostream>

float calculateArea(float length, float width) {
	return length * width;
}

int main() {
	float length, width;
	std::cout << "Enter the length of the rectangle: ";
	std::cin >> length;
	std::cout << "Enter the width of the rectangle: ";
	std::cin >> width;
	float area = calculateArea(length, width);
	std::cout << "The area of the rectangle is: " << area << std::endl;
	return 0;
}