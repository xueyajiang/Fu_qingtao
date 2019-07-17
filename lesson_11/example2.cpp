#include <iostream>
using namespace std;
int main()
{
	int n;
	int number[1000];
	int i = 0;
	int count = 1;
	int flag = 0;
	cin >> n;
	while (i < n)
	    cin >> number[i++];
	while (count <= n)
	{
		flag = 0;
		for (i = 0; i < n; i++)
		{
			if (count == number[i])
			{
				flag++;
			}	
		}
		cout << flag << endl;
		if (flag != 1)
			break;
	    count++;
	}

	cout << ((flag != 1) ? "BAD" : "NICE") << endl;
	return 0;
}
