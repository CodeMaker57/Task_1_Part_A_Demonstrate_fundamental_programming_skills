#include <iostream>
#include <string>
#include <cassert>

std::string FizzBuzz(int num); //define the string function FizzBuzz with one parameter (integer num)

//main body
int main() {

	//check if the function returns the correct string
	assert(FizzBuzz(7) == "7");
	assert(FizzBuzz(3) == "Fizz");
	assert(FizzBuzz(5) == "Buzz");
	assert(FizzBuzz(15) == "FizzBuzz");

	//loop through each number 1 through 20
	int i = 1;
	for (; i <= 20;) {
		std::cout << FizzBuzz(i) << std::endl; //call the function FizzBuzz for the current number
		i++; //add one to i
	}

}
//main body of FizzBuzz function
std::string FizzBuzz(int num) {

	//initialize toggle and string variables
	int num_Toggle = 0;
	std::string strVar = "";

	//if the number is divisible by 3 add 1 to toggle variable
	if (num % 3 == 0) {
		num_Toggle += 1;
	}

	//if the number is divisible by 5 add 2 to toggle variable
	if (num % 5 == 0) {
		num_Toggle += 2;
	}

	//check for each possible value of num_Toggle (0, 1, 2, 3) and set the string variable to equal the corresponding string
	switch (num_Toggle) {
	case(0): 
		strVar = std::to_string(num); // convert the number into a string
		break;
	case(1): 
		strVar = "Fizz";
		break;
	case(2): 
		strVar = "Buzz";
		break;
	case(3): 
		strVar = "FizzBuzz";
		break;
	}

	return strVar; //return the string variable to the code that called the function

}