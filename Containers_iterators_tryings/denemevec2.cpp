#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
int main()
{
    std::vector<std::string> vec = {"adem", "burhan", "deniz", "ünal"};
    auto result = std::find(vec.begin(), vec.end(), "deniz"); // Aranan değer bir string olmalı
    if (result != vec.end())
    {
        std::cout << "buldun!" << std::endl;
        std::vector<std::string>::iterator it;
        for(it = vec.begin(); it != vec.end(); ++it )
            std::cout << *it << std::endl;
    }
    else
        std::cout << "bulamadın" << std::endl;
    return 0;
}