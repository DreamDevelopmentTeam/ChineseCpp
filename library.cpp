#include "library.h"

#include <iostream>

使用 命名空间 std ;

空值 判断数值(整型 数值){
    如果 (数值 等于 114514){
        std::cout << "True!" << std::endl;
    }否则 {
        std::cout << "False!" << std::endl;
    };
}

整型 主函数(){
    std::cout << "Hello, World!" << std::endl;
    长 整型 临时变量 = 114514;
    std::cout << "temp var is: " << 临时变量 << std::endl;
    判断数值(临时变量);
    当 (临时变量 等于 114514){
        临时变量 = 1919810;
    };
    判断数值(临时变量);
    std::cout << "temp var is: " << 临时变量 << std::endl;
    返回 0;
}

void hello() {
    std::cout << "Hello, World!" << std::endl;
}
