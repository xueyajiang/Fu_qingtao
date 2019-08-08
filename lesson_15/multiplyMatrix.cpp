#include <iostream>
using namespace std;
#define M 100
#define N 10

int main()
{
	int a[N][M];
	int b[N][M];
	int sum[N][M];
	int i, j;
	int t;
	int n1, m1, n2, m2;
    cin >> t;
    while (t--)
    {
    	cin >> n1 >> m1;
    	for (i = 0; i < n1; i++)
    	{
    		for (int j = 0; j < m1; j++)
    		{
    			cin >> a[i][j];
			}
		}
		cin >> n2 >> m2;
		for (i = 0; i < n2; i++)
    	{
    		for (int j = 0; j < m2; j++)
    		{
    			cin >> b[i][j];
			}
		}
		if (m1 != n2)
		{
			cout << "NO" << endl;
			continue;
		}
		else
		{
			cout << "YES" << endl;
			for (i = 0; i < n1; i++)
			{
				for (j = 0; j < m2; j++)
				{
					sum[i][j] = 0;
					for (int l = 0; l < m1; l++)
					{
						sum[i][j] = sum[i][j] + a[i][l] * b[l][j];
					} 
					cout << sum[i][j] << " ";
				}
				cout << endl;
			}
			
		}
	}
    
	return 0;
} 
