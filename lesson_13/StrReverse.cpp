#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ch[255];
	int length;
	char letter;
	gets(ch);
	length = strlen(ch);
	for (int i = 0, j = length - 1; i < length / 2; i++, j--)
	{
		letter = ch[i];
		ch[i] = ch[j];
		ch[j] = letter;
	}
	puts(ch);
	return 0;
}
 
