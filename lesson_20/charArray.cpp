#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：字符数组下标的引用
						strlen()函数 gets()函数 puts()函数 */
	char a[5];
	char *pa = a;
	a[0] = 'H';
	a[1] = 'E';
	a[2] = 'L';
	a[3] = 'L';
	a[4] = 'O';
//	cout << a << " " << strlen(a) << endl;
	char b[] = {'H', 'E', 'L', 'L', 'O'};
	char *pb = b;
	cout << b << endl;
//	a = b;
	pa = pb;
	a[0] = b[0];
	
	int i;
	char f[8];
	f[0] = 'a';
	f[1] = 'b';
	f[2] = '\0';
	cout << f << endl;
	return 0;
}
