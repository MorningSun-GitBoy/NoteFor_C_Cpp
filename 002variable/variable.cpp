/*
 用四种变量表示“Π”，并依次输出
 通过实例了解常量与变量
*/
#include <stdio.h>
int Pai = 3;
long Pi = 3;
float pai = 3.1415926535;
double pi = 3.1415926535;
char p = 'P';//'Π';Π不在char的可表示范围里
int main(){
      //void none;//void只能修饰函数，不能修饰变量,因为系统无法为none分配一段大小为空的内存
      printf("整数（int）Π: %d\n",Pai);
      printf("整数（long）Π: %ld\n",Pi);
      printf("浮点数（float）Π: %f\n",pai);
      printf("浮点数（double）Π: %lf\n",pi);
      printf("符号（char）Π: %c\n",p);
      return 0;
}
/*
 C语言中存在变量与常量，变量就是是程序可操作的存储区的名称
 在main方法前，我们所定义的是变量，赋值符“=”左侧是变量名，赋值符右侧是常量
 变量的声明格式为：类型 变量名 或 类型 变量名 赋值表达式
 本程序中采用第二种，将右侧常量值赋予变量，即存到相应位置
 对于变量的输出，printf()函数采用格式控制符来输出变量，在输出字符串中控制符相应的位置，输出不同变量相应格式的值
 int 类型对应 %d ,long 对应 %ld ,float 对应 %f ,double 对应 %lf ,char 对应 %c
 变量的值有自身的表示范围，超出了范围就会在对应存储区中存入错误的值
*/