#include <iostream>
using namespace std;
int main()
{
	int k;
	int days;
	int i, j;
	int coins;
	cin >> k;
	coins = 0;
	for (i = 1, days = 0; days <= k; i++)
	{
		days = days + i;
		cout << i << " " << days << endl;
		for (j = 1; j <= i; j++)
		{
			coins = coins + i;
		}
		cout << coins << endl;
		if (k -days < 0)
		{
			coins = coins - (days - k) * i;
		}
	}
	cout << coins << endl;
	return 0;
}
