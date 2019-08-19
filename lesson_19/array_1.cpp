#include <iostream>
#include <cstdio>
using namespace std;
int const MAX = 10;
int array[MAX][MAX]; 
int main()
{
	int n;
	cin >> n;
	int i, j;

    for (int k = 1; k <= n; k++)
    {
    	for (i = k-1; i < n; i++)
    	{
    		for (j = k-1; j < n; j++)
    		{
  				if ((i < k) || (j < k))
  				{
  					array[i][j]= k;
  					cout << "test: " <<array[i][j] <<" i = " << i <<" j = " <<j << endl;
				}
			}
		}	
	}
	for (int m = 0; m < n; m++)
	{
		for (int l = 0; l < n; l++)
		{
			cout << array[m][l] << " ";
		}
		cout << endl;
	}
	return 0;
}
