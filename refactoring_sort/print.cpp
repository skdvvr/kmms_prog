#include "print.hpp"

#include <iostream>
#include<vector>

void print_array(const char* const comment, std::vector<int> &start_vector, const int len) {
	const char format = ' ';
	std::cout << comment;
	for (int i = 0; i < len; i++) {
		std::cout << format << start_vector[i];
	}
	std::cout << std::endl;
}