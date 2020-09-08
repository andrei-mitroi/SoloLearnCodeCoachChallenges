#include <iostream>

int main() {
    int length, numbers, sum{ 0 };
    std::cin >> length;
    for (int x{ 1 }; x <= length; x++) {
        std::cin >> numbers;
        if (numbers % 2 == 0) {
            sum += numbers;
        }
    }
    std::cout << sum;
    return 0;
}
