#include <iostream>
using namespace std;
int compare(int a, int b)
{
	int flag;
	if (a == b)
		flag = 0;
	if (a == 0)
	{
		if (b == 5)
		{
			flag = 2;
		}
		else
		{
			flag = 1;
		}
	}
	else if (a == 2)
	{
		if (b == 5)
		{
			flag = 1;
		}
		else
		{
			flag = 2;
		}
	}
	else
	{
		if (b == 0)
		{
			flag = 1;
		}
		else
		{
			flag = 2;
		}
	}
	return flag;
}
int main()
{
	/* 本节课主要讲解一维数组的应用 */
	int n, nA, nB;
	int aCount = 0;
	int bCount = 0;
	cin >> n >> nA >> nB;
	int aNum[nA];
	int bNum[nB];
	int i, j, k;
	while (i < nA) cin >> aNum[i++];
	i = 0;
	j = 0;
	k = 0;
	while (i <nB) cin >> bNum[i++];
	//0 石头 2 剪刀  5布 
	for (i = 0; i < n; i++)
	{
		int flag = compare(aNum[j], bNum[k]);
		if (1 == flag)
			aCount++;
		else if (2 == flag)
			bCount++;
		j++;
		k++;
		if (j == nA)
			j = 0;
		if (k == nB)
			k = 0;	
	}
	if (aCount == bCount)
	{
		cout << "draw" << endl;
	}
	else if (aCount > bCount)
	{
		cout << "A" << endl;
	}
	else
	{
		cout << "B" << endl;
	}
	return 0;
}
