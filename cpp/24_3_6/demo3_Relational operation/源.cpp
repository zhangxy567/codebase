#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


#include <iostream>
using namespace std;
//C++中的关系只有六种: 
//(1)等于		==
//(2)不等于		!=
//(3)小于		<
//(4)小于等于	<=
//(5)大于		>
//(6)大于等于	>=
//关系运算用于用于比较两个表达式的值,运算结果有 1-true,0-flase
// 如果关系运算符满足,则结果为1,否则为0
//注意:(1)关系运算符的两边可以是数值,变量，也可以是表达式；
//     (2)用std::cout输出关系运算表达式时，关系表达式要加括号；只有关系运算符需要加,否则编译报错,而算术运算符不需要
//     (3)关系运算也适用于字符串（string），字符串常用的关系运算是==和!=，其它的基本上不用。
// 
// 
// 
//



int main()
{
	int a = 10;
	int b = 50;
	bool result = 0;
	result = a == b;
	cout << result << endl;
	cout << (11==11) << endl;

	cout << (a == b) << endl;


	string str1 = "西施";
	string str2 = "西瓜";
	cout << (str1 != str2) << endl;
	cout << (str1 == str2) << endl;

	return 0;
}