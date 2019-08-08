#include <iostream>
using namespace std;
int function(int a, int b)
{
	return a + b;
}
int main()
{
	/* 本次课主要讲解函数的参数，形参和实参，参数的传递 */
	float a = 2.1;
	cout << function(a, 6) << endl;
	return 0;
}
