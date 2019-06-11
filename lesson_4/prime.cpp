#include <iostream>
using namespace std;
int IsPrime_1 (unsigned int num)
{
	int flag = 1;
	int count = 0;
	if (num < 2) 
        flag = 0;
	for (int i = 2; i * i <= num; i++)
	{
	    if (num % i == 0)
		{
			cout << i << endl;
		    flag = 0;
			break;
		}
		count++;
	}
	cout << "count = " << count << endl;
	return flag;
}
int IsPrime(int num)
{
    int i, j;
    int flag = 1;
    int count = 0;
    if (num < 2)
        flag = 0;
    for (i = 2; i < num; i++)
    {
    	for (j = 2; j < num; j++)
    	{
    		if ((i * j) == num)
    		{
    			flag = 0;
    			cout << i << ", " << j << endl;
    			break;
			}
			count++;
		}
		if (flag == 0)
		    break;
	}
	cout << "count = " << count << endl;
	return flag;
}
int main()
{
    int n;
    cin >> n;
	cout << IsPrime_1(n) << endl;
	
	return 0;
} 
