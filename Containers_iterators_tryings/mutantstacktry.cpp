#include <iostream>
#include <stack>
#include <vector>
template<typename T>
class MutantStack : public std::stack<T> {
public:
    typename std::stack<T>::container_type::iterator begin() {
        return std::stack<T>::c.begin();
    }
    typename std::stack<T>::container_type::iterator end() {
        return std::stack<T>::c.end();
    }
};
int main() {
    MutantStack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    for (auto it = stack.begin(); it != stack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}