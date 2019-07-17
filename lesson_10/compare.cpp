#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (!((n > 1) && (n < 1000)))
	{
		cout << "Input parameter out of range!" << endl;
	}
	int hight[n];
	int beforeCount;
	int afterCount;
	int count = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> hight[i];
	}
	for (int i = 0; i < n; i++)
	{
		beforeCount = 0;
		afterCount = 0;
		for (int j = 0; j < n; j++)
		{
			if (hight[i] < hight[j])
			{
				if (i > j)
				{
					beforeCount++;
				}
				else if (i < j)
				{
					afterCount++;
				}
			}
		}
		if (beforeCount == afterCount)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
