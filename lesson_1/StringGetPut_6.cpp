#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	/* ���ο���Ҫ���⣺�ַ���
	   string    char[]
	   cin       cin.get() */
	char s[1000];
	cin.get(s, 1000);
	cout << "s: " << s << endl;
	cout << "strlen: " << strlen(s) << endl;
	cout << "sizeof: " << sizeof(s) << endl;
    return 0;	
} 
