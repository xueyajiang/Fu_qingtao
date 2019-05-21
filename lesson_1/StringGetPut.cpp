#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：字符串
	   string    char[]
	   cin       cin.get() */
    char a = 'A';
    cout << a;
    cout << '\\'; // '\' 
    cout << '\n'; //换行 
	char c;
	c = cin.get();
	cout.put(c) << endl;
	cin.get(c);
	cout.put(c + 1) << endl;
	
	char s[20];
	cin.get(s, 20);
	cout << s << endl;
	
    return 0;	
} 
