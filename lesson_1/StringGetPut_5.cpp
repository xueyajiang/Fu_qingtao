#include <iostream>
#include <climits>
using namespace std;
int main()
{
	/* ���ο���Ҫ���⣺�ַ���
	   string    char[]
	   cin       cin.get() */
	char a[] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	a[3] = '\0';	
	cout << a << endl;
    return 0;	
} 
