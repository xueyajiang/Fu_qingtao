#include <iostream>
#include <cstring>
using namespace std;
void revertString(char *str)
{
	int len = strlen(str);
	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
int main()
{
	char ch[100];
	cout << "Input string:" << endl;
	gets(ch);
	revertString(ch);
	cout << "Output string:" << endl;
	puts(ch);
	return 0;
}
