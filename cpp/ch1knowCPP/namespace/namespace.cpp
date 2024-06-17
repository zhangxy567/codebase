
#include<iostream>
using namespace std;

namespace A
{
	int cppvalue = 10;
}

namespace CPP
{
	namespace second
	{
		int a =55;
	}
}


int cppvalue = 20 ;


void test01()
{
	namespace newA = A;
	cout<< newA::cppvalue;

}
int main()
{
	int cppvalue =30;
	cout << "局部cppvalue:"<<cppvalue<<endl;
	cout << "A空间cppvalue:"<<A::cppvalue<<endl;
	cout << "全局cppvalue:"<<::cppvalue<<endl;



	//嵌套
	cout<<CPP::second::a<<endl;


	//取别名
	test01();
	return 0;
}