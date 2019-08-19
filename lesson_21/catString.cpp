#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "我在";
	string str2 = "极客晨星"; 
	str1 += str2;
	string str3;
	cout << "输入课程" << endl;
	cin >> str3;
	str1 = str1 + str3;
	cout << str1 << endl; 
	return 0;
}
