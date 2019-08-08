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
	cout << "请输入一个4行3列的矩阵：" << endl;
	intputMatrix(a);
	cout << "请输入另外一个4行3列的矩阵：" << endl;
	intputMatrix(b);
	cout << "输出另个矩阵的和：" << endl;
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
