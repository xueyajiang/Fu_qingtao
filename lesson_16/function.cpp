#include <iostream>
using namespace std;

int max(int a, int b);
int main()
{
	/* ���ο���Ҫ���⺯���Ļ����ṹ�ͺ����ķ���ֵ */
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
