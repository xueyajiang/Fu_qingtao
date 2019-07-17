#include <iostream>
using namespace std;
int main()
{
	int base;
	int num;
	int counter;
	counter = 0;
	cin >> num >> base;
	for (int i = 1; i <= num; i++)
	{
		int temp;
		temp = i;
		while(temp)
		{
			if (temp % 10 == base)
			{
				counter++;
			}
			temp = temp / 10;
		}	
	}
	cout << counter << endl;
	return 0;
}
