#include <iostream>
int main() {

    int result = 0;
    
    for (int value=1; value<=10; ++value)
    {
        result += value;
    }

    std::cout << "result=" << result <<std::endl;

    return 0;
}