/*
  实现控制台输出Hello World!
  通过实例了解C语言程序结构
*/
#include <stdio.h>//引入C标准输入输出函数库
int main(){//程序入口函数
      printf("Hello World!\n");//调用函数printf()实现功能
      return 0;//函数返回值
}
/*
  由以上程序可知:
  一个C程序包括 库引入、（主）函数、函数体组成
  函数定义返回值，并在函数体中实现返回
  函数体中可以用其他函数实现功能
  程序输出为：
  Hello World!
*/