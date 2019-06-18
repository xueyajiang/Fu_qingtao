#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cin >> x;
	if ((x >= 0) && (x < 5))
	{
		y = -x + 2.5;
	}
	else if ((x >= 5) && (x < 10))
	{
		y = 2 -1.5 * (x - 3) * (x - 3);
	}
	else if ((x >= 10) && (x < 20))
	{
		y = x / 2 - 1.5;
	}
	else
	{
		cout << "Input parameter error!" << endl;
	    return -1;
	}
	cout << y << endl;
	
	return 0;
}
