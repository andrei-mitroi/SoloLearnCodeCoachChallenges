#include <iostream>
#include <string>

bool uniqueCharacters(std::string input) {

	for (int i = 0; i <= input.length(); i++) {
		for (int j = i + 1; j < input.length(); j++) {
			if (input[i] == input[j]) {
				return false;
			}
		}
	}
}

int main() {

	std::string input;
	std::cin >> input;

	if (uniqueCharacters(input)) {
		std::cout << "Unique";
	}
	else {
		std::cout << "Deja Vu";

	}

	return 0;
}