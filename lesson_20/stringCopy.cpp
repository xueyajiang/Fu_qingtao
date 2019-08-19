#include <iostream>
#include <cstring>
using namespace std;
void myStrcpy(char *s1, char *s2)
{
	int len;
	len = strlen(s2);
	for (int i = 0; i <= len; i++)
	{
		s1[i] = s2[i]; 
	}
}
int main()
{
	char ss1[100];
	char ss2[50];
	gets(ss1);
	gets(ss2);
	myStrcpy(ss1, ss2);
	puts(ss1);
	return 0;
}
