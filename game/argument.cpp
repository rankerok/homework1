#include <iostream>
#include <string>
#include "high_scores.h"

int main(int argc, char** argv) {
    int max_value;
	if (argc == 1) {
		max_value=100;
        high_scores(max_value);
	}

	if (argc >= 2) {
	
		std::string arg1_value{ argv[1] };

		if (arg1_value == "-max") {
			std::cout << "-parameter argument was detected!" << std::endl;

			if (argc < 3) {
				std::cout << "Wrong usage! The argument '-parameter' requires some value!" << std::endl;
				return -1;
			}
			// We need to parse the string to the int value
			max_value = std::stoi(argv[2]);
			std::cout << "The '-max' value = " << max_value << std::endl;
			high_scores(max_value);
		}
	}

	return 0;

}