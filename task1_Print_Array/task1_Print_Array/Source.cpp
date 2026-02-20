#include <iostream>

void print_Array(int array[], int arraySize); //define the void function print_Array with two parameters (integer array[] and integer arraySize)

//main body
int main() {
	int Array_To_Print[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3}; //initialize the array
	size_t arraySize = sizeof(Array_To_Print) / sizeof(Array_To_Print[0]); //set arraySize to the number of items in the array
	print_Array(Array_To_Print, arraySize); //call the print_Array function
}

//main body of print_Array function
void print_Array(int array[], int arraySize) {

	int i = 0; //initialize i

	//run for each item in the array
	for (; i < arraySize;) {

		//run if its the first item
		if (i == 0) {
			std::cout << array[i]; //print the current item of the array to the console
		}
		//run for every other item
		else {
			std::cout << ", " << array[i]; //print ", " and the current item of the array to the console
		}
		i++; //add one to i
	}
}