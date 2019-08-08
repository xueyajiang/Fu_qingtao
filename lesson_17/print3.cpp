#include <iostream>
using namespace std;
void print(int n, char ch)
{
	int i, j;
	for (i = n; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			cout << ch << " ";
		}
		cout << endl;
	}
}
int main()
{
	int num;
	char letter;
	cin >> num >> letter;
	print(num, letter);
	return 0;
}
