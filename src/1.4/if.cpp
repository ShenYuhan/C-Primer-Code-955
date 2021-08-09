#include <iostream>

// 求1-10中奇数的和，以及偶数的和
int main() {

    int odd_result = 0;
    int even_result = 0;
    int value = 1;

    while (value<=10)
    {
        // value%2 奇数时为1，偶数时为0
        // 奇数
        if (value%2 == 1) {
            odd_result += value;
        }
        //偶数
        else if (value%2 == 0) {
            even_result += value;
        }
        // 既不是奇数也不是偶数
        else {
            std::cout << "永远都不会打印这里！" << std::endl;
        }
        ++value;          // value += 1;value = value + 1;value++;
    }

    std::cout << "odd_result=" << odd_result << std::endl;
    std::cout << "even_result=" << even_result << std::endl;


    return 0;
}