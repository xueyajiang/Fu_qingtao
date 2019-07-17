#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int vindy[m];
	int win[n];
	int count = 0;
	int i, j;
	
	for (i = 0; i < m; i++)
	{
		cin >> vindy[i];
	}
	for (i = 0; i < n; i++)
	{
		cin >> win[i];
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (vindy[i] == win[j])
			{
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
