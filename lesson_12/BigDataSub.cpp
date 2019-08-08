#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 200;
int main()
{
	char num1[MAX];
	char num2[MAX];
	int sum[MAX], data1[MAX], data2[MAX];
	int len1, len2, len;
	int i, j;
	int bit = 0;
	cin.get(num1, MAX);
	cin.get();
	cin.get(num2, MAX);
	cin.get();
	len1 = strlen(num1);
	len2 = strlen(num2);
	len = len1 > len2 ? len1 : len2;
    memset(sum, 0,sizeof(sum));
    memset(data1, 0, sizeof(data1));
    memset(data2, 0, sizeof(data2));
	for (i = len1 - 1, j = 0; i >= 0; i--, j++)
	{
		data1[i] = num1[j] - '0';
//		cout << "data1" << " " << i <<" " << data1[i] << endl;

	}
	for (i = len2 - 1, j = 0; i >= 0; i--, j++)
	{
		data2[i] = num2[j] - '0';
//		cout << "data2" << " " << i << " " << data2[i] << endl;
	}
	for (i = 0; i < len+1; i++)
	{
		sum[i] = data1[i] - data2[i] - bit;
		bit = 0;
		if (sum[i] < 0)
		{
		    bit++;
			sum[i] = sum[i] + 10;
		}
//		cout << i << " " << sum[i] << endl;
	}
	cout << " " << num1 << endl <<"-  " << num2 << endl << "= ";
	
    int flag = 0;
	for (i = len; i >= 0; i--)
	{
		if ((sum[i] == 0) && (!flag))
			continue;
		flag = 1;
		cout << sum[i];
	}
	cout << endl;
	return 0;
}
