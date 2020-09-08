#include <iostream>
#include <string>
#include <algorithm>

int main(){

	std::string input{};

	std::getline(std::cin, input);

	std::string chars = "+-/&^()!?.*%$#@";

	for (char c : chars) {

		input.erase(std::remove(input.begin(), input.end(), c), input.end());
	}

	std::cout << input;

	return 0;
}