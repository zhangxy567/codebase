#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#include <iostream>
using namespace std;
//C++算数运算: + - * / %(取模就是取余预算)
// 其虽然简单,但是有如下规则
// (1)整数进行除法或者取模运算时，如果分母为0，程序无法运行
// (2)浮点数进行除法运算时，如果分母为0.0，将得到inf（infinite，无穷大）
// //解释:原因是计算机中浮点数存储的不是零,而是无限小的数,任何一个数除以无穷小的数都是无穷大
// (3)两个整数进行除法运算时，将舍去小数部分，得到一个整数
// (4)整数与浮点数进行除法运算时，得到的结果是浮点数   //与分子分母顺序无关
// (5)进行除法运算时，在整数前面加(float)或(double)可以将整数转换为float或double类型   /强制转换优先级最高
// (6)取模运算只能用于整数（分母也不能为0）
// (7)关于强制转换内容,如果不会,只要让等号两边的类型一样就肯定没有问题
// 
// 
// 
// 
//

int main()
{
	int number = 10;
	float fa1=3.14;
	//cout << 10 / 0 << endl;
	//cout << fa1 / 0.0 << endl;
	//cout << number / 3 << endl;
	//cout << (float)number / 3 << endl;
	cout << number % 3 << endl;
	return 0;
}