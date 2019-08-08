#include <iostream>
using namespace std;

bool isCyclic(int n)
{
	int temp;
	int revert = 0;
	temp = n;
	while(temp)
	{
		revert = revert * 10 + temp % 10;
		temp = temp / 10;
	}
	return ((revert == n) ? true : false);
}
bool checkIsCyclic(int n)
{
	bool flag = true;
	int temp;
	int num[10];
	int i = 0;
	temp = n;
	while (temp)
	{
		num[i] = temp % 10;
		i++;
		temp = temp / 10;	
	}
	i--;
	for (int j = 0; j < i; j++, i--)
	{
		if (num[i] == num[j])
		{
			continue;
		}
		flag = false;
		break;
	}
	return flag;
}
int main()
{
	int num;
	int count = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (isCyclic(i))
		{
			count++;
			cout << i <<" ";
		}
	}
	cout << count << endl;
	return 0;
}
