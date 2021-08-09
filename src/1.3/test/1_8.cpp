#include <iostream>

int main() {

    // 千万！千万，别TMD在你的程序里写这种狗屎代码注释！！！
    std::cout << "/*"; //可以输出，双引号之间的被认为是字符串，这里的 /* 或者 */ 不会被识别为嵌套注释符。
    std::cout << "*/"; //可以输出，原因同上。
    std::cout << /* "*/" */" << std::endl;
    std::cout << /* "*/" /* "/*" */; //可以输出
    std::cout << "END!" << std::endl;

    return 0;
}