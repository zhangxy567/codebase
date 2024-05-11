#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include <iostream>
using namespace std;
//程序输入数据的方式有多种。
//从控制台的界面中输入（网页、PC桌面程序、APP程序）；
//从文件中读取；
//从数据库中读取；
//从网络中读取。
//本节学习最简单的从控制台输入,即使用   std::cin>>变量名;
// 由于使用了命名缺省空间,所以std::cin可以写出 cin
// 
// 其他类型都很简单,重点讲一讲bool类型
// (1)bool类型的值在计算机中用0和1储存
// (2)程序内部中可以true和 flase,也可以书写0/1,其他值(数值包括整数和小数)强制转换成1      //即在程序初始化或者赋值阶段 , 而不是使用cin输入
// (3)使用cin只可以输入1/0,其他(数值)值也强制转换成1           //即cin阶段只能输入数值,只有0表示0,其他任意整数,小数,负数,结果都是1,但是当输入
// 单个字符/字符串的时候(包括true)都只会输出0
// (4)cout输出只显示0/1,不显示true/false
// 
//

int main()
{
	string chararray = { 0 };
	//std::cin >> chararray;
	//cin >> chararray;
	//cout << chararray;
	//string womanname;
	//cout << "请输入超级女声的姓名: " ;
	//std::cin >> womanname;
	//cout <<"已输入的超级女声姓名是: " << womanname;
	//string womanname;
	//cout << "请输入超级女声的姓名: ";
	//cin >> womanname;
	//cout << "已输入的超级女声姓名是: " << womanname;
	//return 0;

	//bool yz;
	//yz= true;
	///*cout << "请输入超级女声的颜值: ";
	//cin >> yz;*/
	//cout << "已输入的超级女声颜值是: " << yz;
	//bool yz = true;
	///*cout << "请输入超级女声的颜值: ";
	//cin >> yz;*/
	//cout << "已输入的超级女声颜值是: " << yz;
	//bool yz = 3.14;
	///*cout << "请输入超级女声的颜值: ";
	//cin >> yz;*/
	//cout << "已输入的超级女声颜值是: " << yz;
	bool yz;
	cout << "请输入超级女声的颜值: ";
	cin >> yz;
	cout << "已输入的超级女声颜值是: " << yz;
	return 0;
}