#include <iostream>
using namespace std;
int function(int a, int b)
{
	return a + b;
}
int main()
{
	/* ���ο���Ҫ���⺯���Ĳ������βκ�ʵ�Σ������Ĵ��� */
	float a = 2.1;
	cout << function(a, 6) << endl;
	return 0;
}
