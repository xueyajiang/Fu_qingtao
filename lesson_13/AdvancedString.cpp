#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	/* ���ο���Ҫ���⣺char����
	   char [] �ַ������������� */
	char b[] = "Hello";
	cout << sizeof(b) << " " << strlen(b) << endl;
	int i;
	char c[8];
	c[0] = 'a';
	c[1] = 'b';
	c[2] = '\0';
	cout << c << endl;
	
	char d[18];
	cout << "����������" << endl;
	cin >> d;
	cout << "�ַ����ĳ���" << strlen(d) << endl;
	return 0;
}
