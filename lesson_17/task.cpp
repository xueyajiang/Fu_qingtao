#include<iostream>
using namespace std;
int cnt = 1;
void funData(int &num)
{
//	cout << num;
	for (int i = 1; i <= num / 2; i++)
	{
		cnt++;
		cout << i*10 + num << endl;
		funData(i);
	}
//	cout << endl;
}
int main()
{
    int n;
    cin >> n;
    funData(n);
    cout << cnt << endl;
    return 0;
}

