#include <iostream>
using namespace std;
int main()
{
	/* 本次课主要讲解：条件运算符 ？ ： 
	   三目运算符 Exp1 ？ Exp2 ：Exp3 */
	3 > 2 ? cout <<'A' << endl : cout << 'B' << endl; 
	int a = 3 > 3 ? 5 : 8;
	cout << a << endl;
	int a1 = 3 > 2 ? 5 + 5 < 10 ? 4 : 7 : 5 * 5;
	int a2 = (3 > 2) ? ((5 + 5 < 10) ? 4 : 7) : (5 * 5);
	int a3 = (3 > 2) ? (5 + (5 < 10 ? 4 : 7)) : (5 * 5);
	cout << "a1 = " << a1 <<" a2 = " << a2 << " a3 = " << a3 << endl; 
	return 0;
}
