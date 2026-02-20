#include <iostream>
#include<cassert>

int minimum_Element(int array[], int arraySize); //define the integer function minimum_Element with two parameters (int array[] and int arraySize)

//main body
int main() {

	int Check_for_Min[] = {67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29}; //initialize the array
	size_t arraySize = sizeof(Check_for_Min) / sizeof(Check_for_Min[0]); //set arraySize to the number of items in the array

	assert(minimum_Element(Check_for_Min, arraySize) == 2); //check if the minimum_Element function returns 2
}

//main body of minimum_Element function
int minimum_Element(int array[], int arraySize) {

	//initialize minimum_Num and i variables
	int minimum_Num = 0;
	int i = 0;

	//for each item in the array check if its the first item or if its smaller than the first item and set minimum_Num to that number
	for (; i < arraySize;) {
		if ((i == 0) || (array[i] < minimum_Num)) {
			minimum_Num = array[i];
		}

		i++; //add one to i
	}

	return minimum_Num; //return the minimum_Num variable
}