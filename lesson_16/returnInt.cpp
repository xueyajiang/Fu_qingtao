#include <iostream>
using namespace std;
void show()
{
	cout << "Hello world!" << endl;
	return ;
}
char cfunc(int i)
{
	if (i == 0)
		return 'a';
	if (i == 1)
		return 'b';
}
int main()
{
	cout << "type an integer:";
	int val;
	cin >> val;
	cout << cfunc(val) << endl;
	show();
	return 0;
}
