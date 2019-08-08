#include <iostream>
using namespace std;
bool checkIsPrime(int n)
{
	bool flag = true;
	for (int i = 2; i * i <= n; i++)
	{
	    if (n % i == 0)
		{
		    flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	int count = 0;
	int num;
	cin >> num;
	for (int i = 2; i < num; i++)
	{
		if (checkIsPrime(i))
		{
			count++;
			cout << i << " ";
		}
	}
	cout << count << endl;
	return 0;
}
