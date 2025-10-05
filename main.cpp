// Simple C++ program that reads a size and a vector, then prints
// the numbers at even indices (0, 2, 4, ...)
#include <iostream>
#include <vector>

int main() {
    int size = 0;
    if (!(std::cin >> size) || size < 0) {
        return 0;
    }

    std::vector<int> numbers(static_cast<std::size_t>(size));
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[static_cast<std::size_t>(i)];
    }

    for (std::size_t index = 0; index < numbers.size(); ++index) {
        if (index % 2 == 0) {
            std::cout << numbers[index] << std::endl;
        }
    }

    return 0;
}


