#include <iostream>
using namespace std;
int main()
{
	int day;
	cin >> day;
	int i, j;
	int total = 0;
	int segment = 1; 
	int remain = 0;
	
	for (i = 1; i <= day; i = i + segment)
	{
		for (j = 1; j <= segment; j++)
		{
			
			total = total + segment;
//			cout << total << " " << segment << endl;
//			cout << " i = " << i << " " << "j = " << j << endl;
		}
		segment++;
		remain = i;
	}
	remain++;
	for (; remain <= day; remain++)
	{
//		cout << "remain: " << total << endl;
		total = total + segment;
	}
	cout << total << endl;
	
	return 0;
}
