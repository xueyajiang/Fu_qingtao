#include <iostream>
using namespace std;
int main()
{
	float score;
	int flag;
	
	cout << "������ѧ���ĳɼ���";
	cin >> score;
	if ((score >= 0) && ( score < 60))
    {
    	flag = 1;
	}
	else if ((score >= 60) && (score < 70))
    {
    	flag = 2;
	}
	else if ((score >= 70) && (score < 80))
	{
		flag = 3;
	}
	else if ((score >= 80) && (score < 90))
    {
    	flag = 4;
	}
	else if ((score >= 90) && (score <= 100))
	{
		flag = 5;
	}
	else
	{
		flag = 0;
	}
	switch (flag)
	{
		case 1: cout << "������" << endl; break;
		case 2: cout << "����" << endl; break;
		case 3: cout << "����" << endl; break;
		case 4: cout << "��" << endl; break;
		case 5: cout << "��+" << endl; break;
		default:
		    cout << "����ĳɼ�����" << endl; 
	}
	return 0;
}
