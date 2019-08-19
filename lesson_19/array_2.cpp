#include <iostream>
using namespace std;
int main()
{
	int i, j, n, k, a[18][18];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i >= j)
				k = j + 1;
			else
				k = i + 1;
			a[i][j] = k;
			cout << k << " ";
		}
		cout << endl;
	}
	return 0;
}
