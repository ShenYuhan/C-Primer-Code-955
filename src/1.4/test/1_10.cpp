#include <iostream>

int main() {

    int value = 10;

    while (value>=0)
    {
        std::cout << "value = " << value << " ";
        --value;          // value -= 1;value = value - 1;value--;
    }
    std::cout << std::endl;

    return 0;
}