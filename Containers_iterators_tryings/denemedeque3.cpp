#include <iostream>
#include <deque>
int main() {
    std::deque<int> myDeque = {1, 2, 3, 4, 5};
    std::cout << "Deque'nin ilk hali: ";
    for (const auto& elem : myDeque) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    myDeque.pop_front();
    myDeque.pop_back();
    std::cout << "Deque'nin son hali: ";
    for (const auto& elem : myDeque) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}