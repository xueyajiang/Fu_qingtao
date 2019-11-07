#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解指针的概念
	   指针变量
	   指针与函数 */
	int a = 0x04030201;
	int *p = &a;
	int *p2 = NULL;
	char *p1 = (char *)p;
	cout << "p1 1: " << (void *)p1 << " " << (int )*p1 << endl;
	p1++;
	cout << "p1 2: " << (void *)p1 << " " << (int )*p1 << endl;
	p1++;
	cout << "p1 3: " << (void *)p1 << " " << (int )*p1 << endl;
	p1++;
	cout << "p1 4: " << (void *)p1 << " " << (int )*p1 << endl;
	cout << "p :" << p << " " << *p << endl;
	p++;
	cout << "p aa:" << p << " " << *p << endl;
	cout << "p size:" << sizeof(p) << " p1 size:" << sizeof(p1) << endl;

	return 0;
}
