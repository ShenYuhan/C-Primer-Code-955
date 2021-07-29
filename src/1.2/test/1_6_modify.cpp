#include <iostream>

int main() {
    /* 这是一段错误的代码，分号用来分隔语句，但是其中
     * 第二条和第三条语句都少了std::cout，加上即可
     *
     *  std::cout << "The sum of " << v1;
     *            << " and " << v2;
     *            << " is " << v1 + v2 << std::endl;
    */
   // 改正后的程序，删除多余地分号或者增加std::cout即可
   int v1 = 3;
   int v2 = 4;
   std::cout << "The sum of " << v1
             << " and " << v2
             << " is " << v1 + v2 << std::endl;
}