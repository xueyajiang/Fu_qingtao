#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：continue，break */
	int i, j;
	
	for (i = 1; i < 1000; i++)
	{
	    if (i > 10)
		    break;	
    }
    
    cout << "Here we go! " << i << endl;
    
    for (i = 1; i < 5; i++)
    {
    	for (j = 1; j < 5; j++)
    	{
    		if (j == 3)
    		    break;
    		cout << j << " ";
		}
		cout << endl;
	}
	
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		    continue;
		cout << i * 2 << endl;
	}
	int k = 4, n = 0;
	while (n < k)
	{
		n++;
		if (n % 3 != 0)
		    continue;
		k--;
	}
	cout << k << ", " << n << endl;
	return 0;
}
