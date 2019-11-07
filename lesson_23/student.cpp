#include <iostream>
#include <string>
using namespace std;
typedef struct student
{
	string name;
	int id;
}Student;
const int MAX_ID = 1000;
int main()
{
	Student students[MAX_ID];
	int num;
	string findName;
	bool find = false;
	cout << "plase input number of this class: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		cout << "input name and NO. of student " << i << ":";
		cin >> students[i].name >> students[i].id;
	}
	cout << "please input name you want find: ";
	cin >> findName;
	for (int i = 1; i <= num; i++)
	{
		if (students[i].name == findName)
		{
			cout << findName << " has been found, his number is " << students[i].id << endl;
			find = true;
			break;
		}
	}
	if (find != true)
	{
		cout << findName <<" hasn't been found." << endl;
	}
	return 0;
}
