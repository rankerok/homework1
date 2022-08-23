#include <iostream>
#include "random_value.h"
int check_value(int max_value) {

	const int target_value = random_value(max_value);
	int current_value = 0;
	int n=0;
	bool not_win = true;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;
	    n=n+1;

		if (current_value < target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" << std::endl;
			break;
		}

	} while(true);

	return n;	
}