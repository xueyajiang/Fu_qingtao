#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	/* ���ο���Ҫ���⣺�ַ���
	   string    char[]
	   cin       cin.get() */
	char str[1000];
	cin.get(str, 1000);
	int i;
	i = strlen(str);
	for (; i >= 0; )
    {
    	cout << str << endl;
    	str[--i] = '\0';
	}
    return 0;	
} 
