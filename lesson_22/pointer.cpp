#include <iostream>
using namespace std;
int main()
{
	/* ���ο���Ҫ����ָ��ĸ���
	   ָ�����
	   ָ���뺯�� */
	int a = 100;
	int *p = &a;
	cout << *p << endl;
	int b = 10;
	int *p1 = &a, *p2 = &a;
	*p2 = 20;
	cout << *p1 << endl; 
	return 0;
}
