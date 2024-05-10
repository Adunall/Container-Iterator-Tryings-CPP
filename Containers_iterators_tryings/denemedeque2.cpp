#include <iostream>
#include <algorithm>
#include <deque>
int main() {
    std::deque<int> myDeque;
    // Deque'ye değerler ekleme
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);
    myDeque.push_back(4);
    myDeque.push_back(5);
    auto result = std::find(myDeque.begin(), myDeque.end(), 3);
    if (result != myDeque.end()) {
        std::cout << "Değer bulundu: " << *result << std::endl;
    } else {
        std::cout << "Değer bulunamadı." << std::endl;
    }
    return 0;
}