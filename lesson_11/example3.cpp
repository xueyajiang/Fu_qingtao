#include <iostream>
#include <cmath>
using namespace std;
#define MAX_INDEX 3001
int main()
{
	int data[MAX_INDEX];
	int diff[MAX_INDEX];
	int n;
	int i = 1;
	int flag;
	cin >> n;
	data[0] = 0;
	diff[0] = 0;
	if (n == 1)
		flag = 1;
	while(i <= n)
	{
		cin >> data[i];
		diff[i] = abs(data[i] - data[i - 1]);
		i++;
	}
	for (i = 1; i <= n - 1; i++)
	{	
		flag = 0;
		for (int j = 2; j <= n; j++)
		{
			if (i == diff[j])
			{
				flag = 1;
				break;
			}
			
		}
		if (!flag)
			break;
	}
	cout << (flag ? "NICE" : "BAD") << endl;
	
	return 0;
}
