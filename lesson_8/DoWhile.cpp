#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    do {
    	a++;
	}while(a < 2);
	cout << a << endl;
	
	int b;
	do {
		cin >> b;
		cout << b * b << endl;
	}while (b > 0);
	return 0;
} 
