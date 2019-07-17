#include <iostream>
using namespace std;
void swapInt(int *a, int *b)
{
	cout << "swapInt" << endl;
	int temp = *a;
	(*a > *b) ? (*a = *b, *b = temp) : (*a, *b);
}
void bubbleSort(int *num, int length)
{
	int i, j;
	cout << "bubbleSort:" << length <<endl;
	for (i = length - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			swapInt(&num[j], &num[j+1]);
		}
	}
}
int main()
{
	int num[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	bubbleSort(num, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	
}
