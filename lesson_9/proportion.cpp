#include <iostream>
using namespace std;
int findMaxCommonDivisor_2(int x, int y)
{
	int factor = 1;

    for (int i = 2; (i < x) && (i < y); i++)
	{
		if ((x % i == 0) && (y % i == 0))
		{
			x = x / i;
			y = y / i;
			factor = i * factor;
			i--;
		}
	}
    
	return factor;
}
int findMaxCommonDivisor_1(int x, int y)
{
	int countX = 0;
	int countY = 0;
	int factorX[100];
	int factorY[100];
	int num = 1;
	int sum = 1;
	
    for (int i = 2; x != 1; i++)
	{
		if (x % i == 0)
		{
			x = x / i;
			factorX[countX++] = i;
			i--;
		}
	}
    for (int i = 2; y != 1; i++)
	{
		if (y % i == 0)
		{
			y = y / i;
			factorY[countY++] = i;
			i--;
		}
	}
	
	if (countX > countY)
	{
	    countX = countY;
	}
	for (int i = 0; i < countX; i++)
	{
		for (int j = i; j < countY; j++)
		{
			if (factorX[i] == factorY[j])
			{
				num = num * factorX[i];
				factorY[j] = 0;
			}
		}
		
	}
	return num;
}
int findMaxCommonDivisor(int x, int y)
{
	int num;
	while (x % y)
	{
		num = x % y;
		x = y;
		y = num;
	}
	return num;
}
int main()
{
	/* 本次课主要讲解：for循环和while循环 */
	int A, B, L;
	int A1, B1;
	double diff;
	double rate, rate1;
	int i, j;
	int number;
//	number = findMaxCommonDivisor_2(18, 12);
//	cout << number << endl;
	diff  = 1000000;
	cin >> A >> B >> L;
	rate = A * 0.1 / B;
	for (i = 1; i < L; i++)
	{
		for (j = 1; j < L; j++)
		{
			number = findMaxCommonDivisor_2(i, j);
			cout << "i = " << i << " j = " << j << " number = " << number << endl;
			if (number == 1)
			{
				rate1 = i * 0.1 / j;
				if (rate1 >= rate)
				{
					if ((rate1 - rate) < diff)
					{
						diff = rate1 - rate;
						A1 = i;
						B1 = j;
						cout << "A1 = " << A1 << " B1 = " << B1 << " diff = " << diff << endl; 
					}
				}
			}
		}
	}
	cout << A1 << " " << B1 << endl;
	return 0;
}
