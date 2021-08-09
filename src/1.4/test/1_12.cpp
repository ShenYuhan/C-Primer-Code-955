#include <iostream>

// 求-100到100之间所有整数的和
int main() {

    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "sum=" << sum << std::endl;

    return 0;
}