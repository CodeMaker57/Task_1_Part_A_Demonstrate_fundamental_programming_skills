#include <iostream>
#include <cassert>

int statistics(int hit_Count, int shot_Count); //definbe the integer function statistics with two parameters (integer hit_Count and integer shot_Count)

//main body
int main() {

	//check if the function returns the correct values
	assert(statistics(3, 4) == 75);
	assert(statistics(1, 2) == 50);
	assert(statistics(13, 13) == 100);
	assert(statistics(21, 173) == 12);
	assert(statistics(0, 0) == 0);
}

//main body of statistics function
int statistics(int hit_Count, int shot_Count) {

	//check if hit_Count is less than or equal to the shot_Count and that there both a positive integer
	assert(hit_Count <= shot_Count);
	assert((hit_Count >= 0) && (shot_Count >= 0));

	int percent = 0; //initialize percent
	percent = hit_Count * 100; //multipliy percent by 100

	//if the hit_Count isnt 0 divide percent by the shot_Count
	if (hit_Count != 0) {
		percent = percent / shot_Count;
	}

	return percent; //return the percent variable
}