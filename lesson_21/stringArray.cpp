#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s[5] = {"极客", "晨星", "明日", "之星", "!"};
	string str;
	for (int i = 0; i < 5; i++)
		str += s[i];
	cout << str << endl; 
	return 0;
}
