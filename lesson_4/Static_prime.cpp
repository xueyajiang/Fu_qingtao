#include <iostream>
using namespace std;
int IsPrime(unsigned int num)
{
	int flag = 1;
	if (num < 2)
	    flag = 0;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int m, n;
	cin >> m >> n;
	int count = 0;
	for (unsigned int i = m; i <= n; i++)
	{
		if (IsPrime(i))
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
