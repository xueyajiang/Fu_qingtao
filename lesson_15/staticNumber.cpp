#include <iostream>
using namespace std;
int main()
{
	int l, r;
	int number;
	int count = 0;
	cout << "请输入整数范围：" << endl; 
	cin >> l >> r;
	cout << "请输入要统计的数字：" << endl; 
	cin >> number;
	for (int i = l; i <= r; i++)
	{
		int temp = i;
		while (temp)
		{
			if (temp % 10 == number)
			{
				count++;
			}
			temp = temp / 10;
		}
	}
	cout << count << endl;
	return 0;
}
