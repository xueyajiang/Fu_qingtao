#include <iostream>
using namespace std;
int fun(int n)
{
	if (n == 1)
		return 1;
	else
		return fun(n -1) * n;
}
int main()
{
	int m, n;
	cin >> n >> m;
	int f;
	f = fun(n)  / (fun(m) * fun(n - m));
	cout << f << endl;
	return 0;
}
