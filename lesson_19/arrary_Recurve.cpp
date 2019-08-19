#include <iostream>
#include <iomanip> 
using namespace std;
const int N = 10;
void structArrary(int m[N][N], int size, int num, int offset)
{
	if (size == 0)
		return;
	if (size == 1)
	{
		m[offset][offset] = num;
		return;
	}
	int i;
	for (i = 0; i < size - 1; i++)
	{
		m[offset + i][offset] = num - i;
		cout << "i = " << offset + i << " j = " << offset << " " << m[offset + i][offset] << endl;
		m[offset + size - 1][offset + i] = num - (size - 1) - i;
		cout << "i = " << offset + size - 1 << " j = " << offset + i << " " << m[offset + size - 1][offset + i] << endl; 
		m[offset + size - 1 - i][offset + size - 1] = num - 2 * (size - 1) - i;
		cout << "i = " << offset + size - 1 - i << " j = " << offset + size - 1 << " " << m[offset + size - 1 - i][offset + size - 1] << endl;
		m[offset][offset + size - 1 - i] = num - 3 * (size - 1) - i;
		cout << "i = " << offset << " j = " << offset + size - 1 - i << " " << m[offset][offset + size - 1 - i] << endl;
	}
	cout << "---------------------------------" << endl;
	structArrary(m, size - 2, num - 4*(size - 1), offset + 1);
}
int main()
{
	int b[N][N];
	int n;
	cin >> n;
	structArrary(b, n, n * n, 0);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << setw(2) << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
