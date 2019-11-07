#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解指针的概念
	   指针变量
	   指针与函数 */
	int a = 100;
	int *p = &a;
	cout << *p << endl;
	int b = 10;
	int *p1 = &a, *p2 = &a;
	*p2 = 20;
	cout << *p1 << endl; 
	return 0;
}
