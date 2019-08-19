#include <iostream>
#include <iomanip>
using namespace std;
const int N = 20;
void structArray(int myArray[N][N], int size)
{
	int i = 0;
	int j;
	int num = size * size;
	for (int k = 0; k <= size / 2; k++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			myArray[i][j] = num--;
		}
		i++;
		for (j = 0; j < size; j++)
		{
			myArray[i][j] = num;
		}
		i++;
	}
}
int main()
{
	int data[N][N];
	int n;
	cin >> n;
	structArray(data, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(2) << data[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
