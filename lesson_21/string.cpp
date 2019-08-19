#include <iostream>
#include <string>
using namespace std;
int main()
{
	/* 本次课主要讲解String类
	    String字符串元素的访问
		String字符串连接和比较
		String数组 */
	string a1;
	string a2 = "China";
	a1 = "Canada";
	char s1[30] = "test";
    a1 = "test";
	a1 = a2;
	cin >> a1;
	cout << a1 << endl;
	string string1 = "C++";
	string string2 = "Language";
	string1 = string1 + string2;
	cout << string1 << endl;
	string name[5] = {"Zhang", "Li", "Fun", "Wang", "Tan"};
	char name1[5][20] = {"Zhang", "Li", "Fun", "Wang", "Tan"};
	cout << name << endl;
	
	string s = "how are you!";
	cout << s << endl;
	cout << "访问修改第5个字符" << endl;
	s[4] = 'A';
	cout << s << endl; 
	return 0;
}
