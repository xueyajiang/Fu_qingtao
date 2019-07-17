#include <iostream>
using namespace std;
int main()
{
	float score;
	int flag;
	
	cout << "请输入学生的成绩：";
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
		case 1: cout << "不及格" << endl; break;
		case 2: cout << "及格" << endl; break;
		case 3: cout << "良好" << endl; break;
		case 4: cout << "优" << endl; break;
		case 5: cout << "优+" << endl; break;
		default:
		    cout << "输入的成绩有误！" << endl; 
	}
	return 0;
}
