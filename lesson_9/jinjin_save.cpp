#include <iostream>
using namespace std;
int main()
{
	int budget[12];
	int saveMoney = 0;
	int remain = 0;
	int save = 0;
	int x = 0;
	int total = 0;
	
	for (int i = 0; i < 12; i++)
	{
		cin >> budget[i];
	}
	for (int i = 0; i < 12; i++)
	{
		remain = remain + 300 - budget[i];
		cout << "remain = " << remain << endl;
		if (remain < 0)
		{
			x = i + 1;
			break;
		}
		else
		{
			if (remain >= 100)
			{
				int temp = remain;
				remain = remain % 100;
			    saveMoney = saveMoney + temp - remain;
				cout << saveMoney << " " << remain << endl;
		    }	 
		}
	}
	if (x != 0)
	{
		cout << "-" << x << endl;
	}
	else
	{
		total = saveMoney * 1.2 + remain;
		cout << total << endl;
	}
	
	return 0;
}
