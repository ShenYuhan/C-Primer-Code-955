#include <iostream>
#include <string>
// ��������
class Person {
// Ȩ�޿���
public:
	// ��Ա���������ԣ�
    std::string name;
    int age;
    int sex;
    double money;
    
    // ��Ա����
    void eat() {
        std::cout << "�һ�Ҫ�ԣ�" << std::endl;
    }
    void sleep() {
        std::cout << "�һ���˯��" << std::endl;
    }
    bool buy_house(double price) {
        if (money>price) {
            std::cout << "С�����һ��10ƽ�׵ĺ�լ" << std::endl;
            money -= price;
            return true;
        } else {
            std::cout << "���ȥ996��" << std::endl;
            return false;
        }
    }
}; // �ֺűز�����