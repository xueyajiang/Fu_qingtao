#include <iostream>
#include <climits>
using namespace std;
int main()
{
	/* 本次课主要讲解：字符串
	   string    char[]
	   cin       cin.get() */
	char a[] = {'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	a[3] = '\0';	
	cout << a << endl;
    return 0;	
} 
