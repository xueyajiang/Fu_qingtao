#include <iostream>
using namespace std;
#define M 4
#define N 3
void intputMatrix(int array[M][N])
{
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cin >> array[i][j];
		}
	}
}
int main()
{
	int a[M][N];
	int b[M][N];
	int sum[M][N];
	int i, j;
	cout << "������һ��4��3�еľ���" << endl;
	intputMatrix(a);
	cout << "����������һ��4��3�еľ���" << endl;
	intputMatrix(b);
	cout << "����������ĺͣ�" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
    
	return 0;
}
