#include <iostream>

int main() {

    int result = 0;
    int value = 50;

    while (value<=100)
    {
        result += value;  // result = result + value;
        ++value;          // value += 1;value = value + 1;value++;
    }

    std::cout << "result=" << result << std::endl;


    return 0;
}