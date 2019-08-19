#include <iostream>
using namespace std;
extern int globalcount;
int getcount();
int main() 
{
	/* 本次课主要讲解函数变量的作用域，全局变量，局部变量 */
	int b = 100;
	cout << globalcount << endl;
	cout << getcount() << endl;
	cout << b << endl;
	return 0; 
}

int getcount()
{
	int a;
	a = globalcount;
	return a;
}
int globalcount = 8;

