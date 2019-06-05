#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char ch;
	float money, discount;
	int flag;
	
	cin >> ch;
	cin >> money;
	
	discount = (ch == 'V') ? ((money <= 500) ? 0.85 : (((money > 500) && (money <= 1000)) ? 0.8 : 0.75)) : 0.9;
	flag = (ch == 'V') ? ((discount < (float)0.8) ? 1 : 0) : ((money > 500) ? 1 : 0);

	cout << (flag ? "YES" : "NO") << endl;
	cout << fixed << setprecision(2) << money * discount << endl;
	
/*	(ch == 'V') ? ((money <= 500) ? (cout << "NO" << endl << money * 0.85 << endl) : 
	    (((money > 500) && (money <= 1000)) ? (cout << "NO" << endl << money * 0.8 << endl) : 
		(cout << "YES" << endl << money * 0.75 << endl))) : 
		((money <= 500) ? (cout <<"NO" << endl << money * 0.9 << endl) : (cout <<"YES" << endl << money * 0.9 << endl));
*/		
	return 0;
}
