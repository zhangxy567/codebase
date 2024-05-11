#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
//逗号运算:
//把一行语句中的多个表达式[连接]起来，程序将从左到右执行表达式。
//语法：表达式一, 表达式二, ……, 表达式n;
//逗号运算常用于声明多个变量。
//注意:(1)没有关系的表达式一般不做链接
//	   (2)()的运算符等级最高(1级),","的运算优先等级最低(15级)
//	   (3)逗号表达式的结果是最右值
//	   (2)
//	   (2)
// 
// 
// 
// 
//

#include <iostream>
using namespace std;

int main()
{
	//int a = 10, b = 20;
	//cout << a << endl;
	//cout << b << endl;
	int a;
	int b;
	//b = a = 2, a * 2;
	b = (a = 2, a * 2);
	cout << a << endl;
	cout << b << endl;
	return 0;
}