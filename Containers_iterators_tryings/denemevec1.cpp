#include <iostream>
#include <algorithm>
#include <vector>
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto result = std::find(vec.begin(), vec.end(), 3);
    if (result != vec.end()) {
        std::cout << "Değer bulundu: " << *result << std::endl;
    } else {
        std::cout << "Değer bulunamadı." << std::endl;
    }
    return 0;
}