#include <iostream>
#include "person.h"

int main() {
    int input_money;
    std::cout << "����С���Ĵ��: ";
    std::cin >> input_money;
    Person xiaoming = Person();
    xiaoming.money = input_money;
    xiaoming.name = "xiaoming";
    xiaoming.age = 28;
    xiaoming.sex = 1;

    while (xiaoming.buy_house(20000) == false) {
        std::cout << "С��ȥ996��" << std::endl;
        xiaoming.money += 5000;
    }

    return 0;
}