#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1;
	string s2;
	cout << "���������ַ���" << endl;
	cin >> s1;
	cin >> s2;
	if (s1 == s2)
	{
		cout << "�����ַ������" << endl;	
	}	
	else if (s1 > s2)
	{
		cout << "��һ���ַ������ڵڶ����ַ���" << endl; 
	}
	else
	{
		cout << "�ڶ����ַ������ڵ�һ���ַ���" << endl;	
	} 
	 
	return 0;
}
