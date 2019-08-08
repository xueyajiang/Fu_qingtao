#include <iostream>
using namespace std;
int main()
{
	int a[2][3] = {{4, 5, 6}, {1, 2, 3}};
	int b[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
			b[i][j] = a[i][(j + 2) % 3];
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
