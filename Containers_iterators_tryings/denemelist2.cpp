#include <iostream>
#include <algorithm>
#include <list>
int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};
    auto result = std::find(myList.begin(), myList.end(), 3);
    if (result != myList.end()) {
        std::cout << "Değer bulundu: " << *result << std::endl;
    } else {
        std::cout << "Değer bulunamadı." << std::endl;
    }
    return 0;
}