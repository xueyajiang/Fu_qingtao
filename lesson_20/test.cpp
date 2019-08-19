#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ch[50];
	memset(ch, 1, 50);
	ch[0] = 'x';
	ch[1] = 'y';
	ch[2] = 'z';

	cout << strlen(ch) << endl;
	cout << ch << endl;
	return 0;
}
