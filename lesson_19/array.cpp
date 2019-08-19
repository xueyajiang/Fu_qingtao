#include <iostream>
#include <cstdio>
using namespace std;
int const MAX = 10;
int array[MAX][MAX]; 
int main()
{
	/* 本次课主要讲解二维数组 数字方阵 数组下标运算 */
	int n;
	cin >> n;
	int num, i, j;
	num = n * n;
	for (int k = 0; k <= n/2; k++)
	{
		i = k;
		j = k;
		while (i < n-k)
		{
			array[i][j] = num;
//			cout <<"aaa: " << i << " " << j <<" " << array[i][j] << endl;
			i++;
			num--;
		}
		i--;
		j++;
		while (j < n -k)
		{
			array[i][j] = num;
//			cout <<"bbb: " << i << " " << j <<" " << array[i][j] << endl;
			j++;
			num--;
		}
		j--;
		i--;
		while (i >= k)
		{
			array[i][j] = num;
//			cout <<"ccc: " << i << " " << j <<" " << array[i][j] << endl;
			i--;
			num--;
		}
    	i++;
		j--;
		while(j > k)
		{
			array[i][j] = num;
//			cout <<"ddd: " << i << " " << j <<" " << array[i][j] << endl;
			j--;
			num--;
		}		
    }
    for (int m = 0; m < n; m++)
    {
    	for (int l = 0; l < n; l++)
    	{
    		//cout << array[m][l] << " ";
    		printf("%2.d ", array[m][l]);
		}
		cout << endl;
	}
	return 0;
}
