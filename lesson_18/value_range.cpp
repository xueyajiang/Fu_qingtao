#include <iostream>
using namespace std;
int main()
{
	int i, j, k;
	cout << "Input: ";
	cin >> i >> j;
	k = i + j;
	if (i != 0 && j != 0)
	{
		int k;
		k = i - j;
		cout << "k1 = " << k << endl;
	}
	cout << "k2 = " << k << endl;
	return 0;
}
