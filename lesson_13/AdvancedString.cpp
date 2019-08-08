#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	/* 本次课主要讲解：char数组
	   char [] 字符串访问与运算 */
	char b[] = "Hello";
	cout << sizeof(b) << " " << strlen(b) << endl;
	int i;
	char c[8];
	c[0] = 'a';
	c[1] = 'b';
	c[2] = '\0';
	cout << c << endl;
	
	char d[18];
	cout << "请输入数组" << endl;
	cin >> d;
	cout << "字符串的长度" << strlen(d) << endl;
	return 0;
}
