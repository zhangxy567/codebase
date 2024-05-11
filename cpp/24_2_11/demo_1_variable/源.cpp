#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include <iostream>
using namespace std;


//C++变量,变量用来存放数据
// 变量使用前需要申明:
// 申明语法:  数据类型 变量名
// C++常用变量类型: 整型(int)  浮点型(float和double)  字符型(char) 字符串型(string) 和布尔类型(bool)
// 
// C和C++的变量区别: 
// (1) C++兼容全部C语言变量语法,但是C++缔造了新的变量类型"std::string"
// (std::string使用缺省名语句可以缩写为string)                                     
// 来取代C语言的字符数组存取字符串变量的情况                                        (/*手术刀和仪器的区别*/)
// (2)bool类型也为C++文件可以直接使用的类型,C语言要使用bool类型得包含头文件<stdbool.h>(/*手术刀和仪器的区别*/)
// (3)C语言中对于字符串变量即字符串数组只有在初始化的时候可以直接赋值,其他时刻修改其值需要使用strcpy语句
// 在C++中做出了统一,上面的五大变量可以直接赋值                                      (/*手术刀和仪器的区别*/)
// (4)string新变量和老变量的最大区别在于这是一个会动态地分配内存以存储字符串的变量，因此它的大小不是固定的
//                                                                             (/*手术刀和仪器的区别*/)
// (5)C++变量输出不用控制输出格式,直接把变量名放在输出符号<<的后面即可                                                                              (/*手术刀和仪器的区别*/)
int main()
{

	string name="西施";
	int age = 20;
	double weight = 48.6;
	char sex = 'X';
	bool yz = true;



	std::cout << "姓名: " << name << ", 年龄: " << age << ", 体重: "
		<< weight << ", 性别: " << sex << ", 颜值: " << yz << std::endl;
	return 0;
}