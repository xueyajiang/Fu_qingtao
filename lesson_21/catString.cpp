#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "����";
	string str2 = "���ͳ���"; 
	str1 += str2;
	string str3;
	cout << "����γ�" << endl;
	cin >> str3;
	str1 = str1 + str3;
	cout << str1 << endl; 
	return 0;
}
