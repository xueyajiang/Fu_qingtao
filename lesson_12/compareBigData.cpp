#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 200;
int main()
{
	char a[MAX];
	char b[MAX];
	int lenA, lenB;
	cout << "a = ";
	cin.get(a, MAX);
	cin.get();
	cout << "b = ";
	cin.get(b, MAX);
	cin.get();
	lenA = strlen(a);
	lenB = strlen(b);
	int flag = 0;
	if (lenA > lenB)
	{
		cout << "a > b" << endl;
	}
	else if (lenA < lenB)
	{
		cout << "a < b" << endl;
	}
	else
	{
    	for (int i = 0; i < lenA; i++)
		{
			if (a[i] > b[i])
			{
				flag = 1;
			}
			else if (a[i] < b[i])
			{
				flag = -1;
			}
	        if (flag != 0)
	        	break;
		}
		if (flag == 1)
		{
			cout << "a > b" << endl;
		}
		else if (flag == -1)
		{
			cout << "a < b" << endl;
		}
		else
		{
			cout << "a == b" << endl;
		}
	}
	return 0;
}
