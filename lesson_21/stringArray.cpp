#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s[5] = {"����", "����", "����", "֮��", "!"};
	string str;
	for (int i = 0; i < 5; i++)
		str += s[i];
	cout << str << endl; 
	return 0;
}
