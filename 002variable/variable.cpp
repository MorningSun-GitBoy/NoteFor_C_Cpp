/*
 用四种变量表示“Π”，并依次输出
 通过实例了解常量与变量
*/
#include <stdio.h>
int Pai = 3;
long Pi = 3;
float pai = (float)3.14;
double pi = 3.1415926535;
char p = 'Π';
int main(){
      //void none;//void只能修饰函数，不能修饰变量,因为系统无法为none分配一段大小为空的内存
      printf("整数（int）Π: %d\n",Pai);
      printf("整数（long）Π: %ld\n",Pi);
      printf("浮点数（float）Π: %f\n",pai);
      printf("浮点数（double）Π: %lf\n",pi);
      printf("符号（char）Π: %s\n",p);
      return 0;
}