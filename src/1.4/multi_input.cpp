#include <iostream>

int main() {

    int result = 0;
    int value = 0;
    
    while (std::cin>>value)
    {
        result += value;
    }

    std::cout << "result=" << result <<std::endl;

    return 0;
}