#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


#include <iostream>
using namespace std;
//逻辑运算根据给定的逻辑因子（表达式,变量或值）返回一个新的逻辑因子。
//   &&	逻辑与		a&&b;   如果a和b都为真，则结果为真，否则为假。
//   ||	逻辑或		a||b;	如果a和b中有一个为真，则结果为真，二者都为假时，结果为假。
//   !	逻辑非（反）	!a;		如果a为假，则!a为真； 如果a为真，则!a为假。
// 注意:(1)逻辑表达式直接放在cout之间也需要加()
//      (2)逻辑运算符的两边可以是数值，变量也可以是表达式；(由运算符优先级决定)
//      (3)在实际开发中，逻辑运算的多重组合是重点。(运算符的左结合性)
// 
// 
//
int main()
{
	//bool a1 = true;
	//bool b1 = true;
	//bool c1 = a1 && b1;
	//cout << c1 << endl;


	//bool a2 = false;
	//bool b2 = true;
	//bool c2 = a2 && b2;
	//cout << c2 << endl;

	//bool a3 = true;
	//bool b3 = false;
	//bool c3 = a3 && b3;
	//cout << c3 << endl;

	//bool a4 = false;
	//bool b4 = false;
	//bool c4 = a4 && b4;
	//cout << c4 << endl;
	//bool a1 = true;
	//bool b1 = true;
	//bool c1 = a1 || b1;
	//cout << c1 << endl;


	//bool a2 = false;
	//bool b2 = true;
	//bool c2 = a2 || b2;
	//cout << c2 << endl;

	//bool a3 = true;
	//bool b3 = false;
	//bool c3 = a3 || b3;
	//cout << c3 << endl;

	//bool a4 = false;
	//bool b4 = false;
	//bool c4 = a4 || b4;
	//cout << c4 << endl;
	bool num1 = true;
	bool num2 = false;
	cout << num1 << endl;
	cout << !num1 << endl;
	cout << num2 << endl;
	cout << !num2 << endl;
	return 0;
}