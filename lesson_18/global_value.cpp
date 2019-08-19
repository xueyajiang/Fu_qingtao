#include <iostream>
using namespace std;
int name = 6;
int main()
{
	int name = 8;
	cout << "局部变量name的值：";
	cout << name << endl;
	cout << "全局变量name的值：";
	cout << std::name << endl; 
	return 0;
}
