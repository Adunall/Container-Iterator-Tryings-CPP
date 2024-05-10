#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> numbers = {5, 10, 3, 8, 15, 20};
    std::sort(numbers.begin(), numbers.end());
    // En büyük aralık
    int maxInterval = numbers.back() - numbers.front();
    // En küçük aralık
    int minInterval = INT_MAX;
    for (size_t i = 1; i < numbers.size(); ++i) {
        int interval = numbers[i] - numbers[i - 1];
        if (interval < minInterval) {
            minInterval = interval;
        }
    }
    std::cout << "En buyuk aralik: " << maxInterval << std::endl;
    std::cout << "En kucuk aralik: " << minInterval << std::endl;
    return 0;
}