#include <iostream>

int main() {

    int num1;
    int num2;
    std::cout << "num1 must greater than num2!" << std::endl;
    std::cout << "Please input num1: ";
    std::cin >> num1;
    std::cout << "Please input num2: ";
    std::cin >> num2;

    int value = num1;
    // num1 = 10;num2 = 0; 可以打印
    // num1 = 0;num2 = 10; 不会打印
    while (value>=num2)
    {
        std::cout << "value = " << value << " ";
        --value;          // value -= 1;value = value - 1;value--;
    }
    std::cout << std::endl;

    return 0;
}