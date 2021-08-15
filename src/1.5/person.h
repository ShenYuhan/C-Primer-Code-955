#include <iostream>
#include <string>
// 定义人类
class Person {
// 权限控制
public:
	// 成员变量（属性）
    std::string name;
    int age;
    int sex;
    double money;
    
    // 成员函数
    void eat() {
        std::cout << "我还要吃！" << std::endl;
    }
    void sleep() {
        std::cout << "我还想睡！" << std::endl;
    }
    bool buy_house(double price) {
        if (money>price) {
            std::cout << "小明获得一个10平米的豪宅" << std::endl;
            money -= price;
            return true;
        } else {
            std::cout << "快滚去996！" << std::endl;
            return false;
        }
    }
}; // 分号必不可少