#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：字符串
	   string    char[]
	   cin       cin.get() */
	char a = 'A';
	char b = '+';
	string s = "Hello";
	cout << s.size() << endl;
	cout << s.length() << endl;
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << endl;
	} 
	/* 字符数组 */
	char t[] = {'H', 'e', 'l', 'l', 'o', '\0'}; //字符串 
	char x[] = {'H', 'e', 'l', 'l', 'o'}; //不是字符串
	cout << t << endl;
	cout << x << endl;
	
	string c = "Hello world!";
	char d[] = {'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
	char e[] = "Hello world!";
	string f(d);
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	
    return 0;	
} 
