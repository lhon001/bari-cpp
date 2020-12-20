#include<iostream>

int main() {
	int arr1[10] = {5, 9, 2, 1, 6, 3, 8, 4, 7, 0};
	std::cout << "arr1: ";       
	for (int i = 0; i < 10; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	int arr2[] = {12, 34, 23, 345, 54, 98, 253};
        std::cout << "arr2: ";
	for (int i = 0; i < 7; i++) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
