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
	cout << "������һ��2��3�еľ���" << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "����������һ��3��4�еľ���" << endl;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < P; j++)
		{
			cin >> b[i][j];
		}
	}
	cout << "����������ĳ˻���" << endl;
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
