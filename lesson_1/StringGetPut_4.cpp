#include <iostream>
#include <climits>
using namespace std;
int main()
{
	/* ���ο���Ҫ���⣺�ַ���
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
