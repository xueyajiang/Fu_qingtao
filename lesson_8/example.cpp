#include <iostream>
using namespace std;
int main()
{
	unsigned int num;
	int sum;
	
	cin >> num;
	sum = 0;
	do {
		sum += num % 10;
		num /= 10;
	}while(num);
	
	cout << sum << endl;
	return 0;
}
