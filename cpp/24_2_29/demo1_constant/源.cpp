#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include <iostream>
using namespace std;
#define MONTHS 12
#define PI 3.1415


//C++声名常量有两种方法
//(1) 一种是宏常量
//				一般是在main函数上面声名,用大写命名(用大写可以与变量区分,当然也可以用小写,但是不符合主流)
//				语法: #define 常量名 数值        //define不能带分号";"
//(2)还有一种是const修饰的变量
//				在程序的任何地方都可以声名
//				语法: const 数据类型 常量值==值;  //const用法必须带分号
//				const的用法简单来说就是声名变量时,在头部加上const,使之变为常量值
// 常量的特点时不容许修改值,否则会报错
// 
// 
// 
// 
//
int main()
{
	//MONTHS = 13;
	const int days = 7;
	cout << " 一年有 " << MONTHS << "个月" << endl;
	cout << " 圆周率是 " << PI << endl;
	//days = 10;
	cout << " 一个星期天数: " << days << endl;
	return 0;
}