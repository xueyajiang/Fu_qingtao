#include <iostream>
using namespace std;
extern int globalcount;
int getcount();
int main() 
{
	/* ���ο���Ҫ���⺯��������������ȫ�ֱ������ֲ����� */
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

