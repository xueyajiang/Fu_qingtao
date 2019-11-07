#include <iostream>
using namespace std;
void swap(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a;
	int b;
//	int *pa = &a;
//	int *pb = &b;
//	int temp;
	cin >> a >> b;
	if (a < b)
	{
	/*	temp = *pa;
		*pa = *pb;
		*pb = temp;*/
		swap(&a, &b);
	}
	cout << a << " " << b << endl;
	return 0;
}
