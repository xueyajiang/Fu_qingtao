#include <iostream>
using namespace std;
int main()
{
	char letter;
	int a, b, c;
	
	cin >> letter;
	(letter == 'J') ? (cin >> a >> b, cout << "长方形的周长和面积：" << (a + b) * 2 <<" "<< a * b << endl) : (cin >> a >> b >> c, cout << "三角形的周长：" << a + b + c << endl); 

	return 0;
}
