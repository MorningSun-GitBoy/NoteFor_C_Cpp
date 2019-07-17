/*
  实现控制台输出Hello World!
  通过实例了解C++语言程序结构
*/
#include <iostream>//引入标准流输入输出库
#include <cstdio>//引入C标准输入输出函数库
using namespace std;//指定命名空间std
int main(){//主函数为程序入口
      cout<<"Hello World!"<<endl;//使用cout对象输出，以及对endl对象的运算实现换行
      printf("Hello World!\n");//调用函数printf()实现功能
      return 0;//返回函数值
}
/*
  由以上程序可知:
  一个C++程序包括 库引入、命名空间指定、（主）函数、函数体组成
  函数定义返回值，并在函数体中实现返回
  函数体中可以用对象实现功能,也可以调用其他函数实现
  程序输出为：
  Hello World!
  Hello World!
  
  在引入cstdio后也可以用printf实现相同的功能
  注意Cpp中引入库与C不同，不用添加.h后缀
  Cpp用命名空间来保证程序中变量不冲突
*/