#include <iostream>
using namespace std;
int main()
{
	/* ���ο���Ҫ���⣺�ַ���
	   string    char[]
	   cin       cin.get() */
	char s[1000];
	cin.get(s, 1000);
	cout << "s: " << s << endl;
	cin.get();
	char t[1000];
	cin.get(t, 1000);
	cout << "t: " << t << endl;
	
    return 0;	
} 
