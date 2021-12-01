﻿#include <iostream>

int searchMax(int array[], size_t len) {
	int max = array[0];
	for (int i = 0; i < len; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return max;
}

int searchMin(int array[], size_t len) {
	int min = array[0];
	for (int i = 0; i < len; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}

void sortArray(int array[], size_t len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		std::cout << "No command line arguments " << std::endl;
		return 1;
	}
	int* array = new int[argc - 1];
	for (size_t i = 1; i < argc; i++)
	{
		array[i - 1] = std::atoi(argv[i]);
	}
	std::cout << "The max in array is: " << searchMax(array, argc - 1) << std::endl;
	std::cout << "The min in array is: " << searchMin(array, argc - 1) << std::endl;
	sortArray(array, argc - 1);
	std::cout << "The sorted array is: " << std::endl;
	for (int i = 0; i < argc - 1; i++) {
		std::cout << array[i] << " ";
	}
	delete[] array;
}
