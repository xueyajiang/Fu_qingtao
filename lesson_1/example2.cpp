#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char original[255];
	int factor;
	char result[255];
	int length;
	int i;
	
	cout << "请输入原文：";
	cin.get(original, 255);
	cin.get();
	cin >> factor;
	length = strlen(original);
	for (i = 0; i < length; i++)
	{
		char temp;
		if ((original[i] <= 'Z') && (original[i] >= 'A'))
		{
			temp = original[i] + factor;
		    if (temp > 'Z')
	    	{
			    temp = temp - 'Z' + 'A' - 1;
		    }
		}
		else
		{
			temp = original[i];
		}
		result[i] = temp;
	}
	result[i] = '\0'; 
	cout <<"密文：" << result << endl; 
	return 0;
}
