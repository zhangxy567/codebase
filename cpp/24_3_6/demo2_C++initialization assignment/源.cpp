#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


#include <iostream>
using namespace std;
//(1)把值写在小括号中，等于号可以省略（C++标准）
//(2)把值写在花括号中，等于号也可以省略（C++11标准），统一初始化列表。
// 
// 
// 
// 
//
int main()
{
	int a1 = 10;          //老版C
	int b1 = (10);	  
	int c1 (10);		  //老版C++
	cout << a1 << endl;
	cout << b1 << endl;
	cout << c1 << endl;

	int a2{ 100 };        //C++11
	cout << a2 << endl;
	int b2 = { 100 };
	cout << b2 << endl;

	return 0;
}