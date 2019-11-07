#include <iostream>
using namespace std;
int main()
{
	int num = 5;
	int *p_a1, *p_a2;
	cout << "p_a1: " << p_a1 << endl;
	cout << "p_a2: " << p_a2 << endl;
	int *p_b = &num;
	cout << "p_b: " << p_b << endl;
	p_a1 = p_b;
	p_a2 = &num;
	cout << "p_a1: " << p_a1 << endl;
	cout << "p_a2: " << p_a2 << endl;
	return 0;
}
