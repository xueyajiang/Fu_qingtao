#include <iostream>
using namespace std;

int max(int a, int b);
int main()
{
	/* 本次课主要讲解函数的基本结构和函数的返回值 */
	cout << max(5, 6) << endl;
	return 0;
}
int max(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;	
}
