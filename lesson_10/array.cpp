#include <iostream>
using namespace std;
int main()
{
	/* ���ڿ���Ҫ���⣺һά����Ĳ�����ͳ�� */
	int arr[] = {5, 8, 7, 9, 10};
	for (int i = 0; i != sizeof(arr)/sizeof(int); i++)
	{
	    if (arr[i] == 3)
		{
			cout << i << endl;
			return 0; 
		}	
    } 
    cout << -1 << endl;
	return 0;
}
