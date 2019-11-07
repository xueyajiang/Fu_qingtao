#include <iostream>
using namespace std;
const int MAX = 10;
void reverseElementOrder(int *p, int num)
{
	int *pHead;
	int *pTail;
	pHead = p;
	pTail = p + (num - 1);
	int temp;
	for (int i = 0; i < num / 2; i++)
	{
		temp = *pHead;
		*pHead = * pTail;
		*pTail = temp;
		pHead++;
		pTail--;	
	}
} 
int main()
{
	/* 本次课主要讲解：用指针实现逆序存放数组元素 
					学生资料管理 
					成绩处理 */
	int a[2] = {10, 20};
	int *p;
	p = a;
	cout << "p address: "<< p << endl;
	p = &a[0];
	*p = 50; 
	cout << "a[0] address: " << p << " " << a[0] << endl;
	p = &a[1];
	*p = 60;
	cout << "a[1] address: " << p << " " << a[1] << endl;

	for (int i = 0; i < 2; i++)
	{
		int a;
	}

	
	int data[MAX];
	int i = 0;
	while (i < MAX)
	{
		cin >> data[i++];	
	}
	reverseElementOrder (data, MAX);
	for (int i = 0; i < MAX; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	return 0;
}
