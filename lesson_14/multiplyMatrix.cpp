#include <iostream>
using namespace std;
#define M 3
#define N 2
#define P 4 

int main()
{
	int a[N][M];
	int b[M][P];
	int sum[M][N];
	int i, j;
	cout << "请输入一个2行3列的矩阵：" << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "请输入另外一个3行4列的矩阵：" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < P; j++)
		{
			cin >> b[i][j];
		}
	}
	cout << "输出另个矩阵的乘积：" << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < P; j++)
		{
			sum[i][j] = 0;
			for (int l = 0; l < M; l++)
			{
				
				sum[i][j] = sum[i][j] + a[i][l] * b[l][j];
	//			cout << sum[i][j] << endl;
	//			cout <<"i = " << l << " " <<a[i][l] << " " << b[j][l] << endl;
	
			} 
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
    
	return 0;
} 
