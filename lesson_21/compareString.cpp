#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1;
	string s2;
	cout << "输入两个字符串" << endl;
	cin >> s1;
	cin >> s2;
	if (s1 == s2)
	{
		cout << "两个字符串相等" << endl;	
	}	
	else if (s1 > s2)
	{
		cout << "第一个字符串大于第二个字符串" << endl; 
	}
	else
	{
		cout << "第二个字符串大于第一个字符串" << endl;	
	} 
	 
	return 0;
}
