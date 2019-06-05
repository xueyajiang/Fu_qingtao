#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	scanf("%d, %d", &a, &b);
	printf("%d, %d \n", a, b);
	scanf("%d+%d+%d", &a, &b, &c);
	printf("%d + %d + %d = %d \n", a, b, c, a + b + c);
	
	scanf("%d+%*d+%d", &a, &b); //跳过带*的输入数据 
	printf("%d, %d\n", a, b);
	
	return 0;
}
