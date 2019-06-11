#include <iostream>
using namespace std;
int main()
{
	int k;
	int daycount = 1;
	int n = 1;
	int coins = 0;
	cin >> k;
	
	for ( ; daycount <= k; )
	{
		for (int i = 1; i <= n; i++)
		{
			coins = coins + n;
			cout << "daycount = " << daycount << endl;
	        daycount++;
	        if (daycount > k)
		    {
		        break;
		    }
	    }
	    cout << "n = "<< n << endl;
		n++;
		
	}
	cout << coins << endl;
	return 0;
}
