#include <iostream>

int main() {

    int num1;
    int num2;

    std::cout << "Please input num1: ";
    std::cin >> num1;
    std::cout << "Please input num2: ";
    std::cin >> num2;

    // 当num1小于num2的时候
    if (num1<num2) {
        //交换num1和num2
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

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