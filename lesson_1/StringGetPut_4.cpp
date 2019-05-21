#include <iostream>
#include <climits>
using namespace std;
int main()
{
	/* 本次课主要讲解：字符串
	   string    char[]
	   cin       cin.get() */
	char a[10], b;
	cin.sync_with_stdio(false);
	cin.get(a, 10);
	cin.ignore(INT_MAX, '\n');
	cin >> b;
	cout << a << ',' << b << endl;
	
    return 0;	
} 
