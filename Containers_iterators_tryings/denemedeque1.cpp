#include <iostream>
#include <deque>
int main() {
    std::deque<int> myDeque;
    // Deque'ye değerler push_front ile ekleme
    myDeque.push_front(1);
    myDeque.push_front(2);
    myDeque.push_front(3);
    for (const auto& elem : myDeque) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}