#include <iostream>
using namespace std;
int addNum(int);
int main()
{
	int n;
	cout << "Please input" << endl;
	cin >> n;
	cout << addNum(n) << endl;
	return 0;
}
int addNum(int n)
{
	if (n == 1)
		return 1;
	else
		return addNum(n - 1) + n;
}
