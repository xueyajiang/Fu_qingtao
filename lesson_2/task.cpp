#include <cstdio>

using namespace std;

int main()
{
	char ch1, ch2, ch3, ch4, ch5;
	int x1, x2, x3;
	
	scanf("%c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);
	if ((ch1 < '0') && (ch1 > '9'))
	{
		printf("输入第一个数字超出范围！\n");
		return -1;
	}
	if ((ch3 < '0') && (ch3 > '9'))
	{
		printf("输入第二个数字超出范围！\n");
		return -1; 
	}
	if ((ch5 < '0') && (ch5 > '9'))
	{
		printf("输入第三个数字超出范围！\n");
		return -1; 
	}
	if ((ch2 != '+') && (ch2 != '-')) 
    {
    	printf("输入的符号错误!\n");
    	return -1;
	}
	if ((ch4 != '+') && (ch4 != '-')) 
    {
    	printf("输入的符号错误!\n");
    	return -1;
	}
	x1 = ch1 - '0';
	x2 = ch3 - '0';
	x3 = ch5 - '0';
	if (ch2 == '+')
	{
		if (ch4 == '+')
		{
			printf("%d + %d + %d = %d\n", x1, x2, x3, x1 + x2 + x3);
		}
		else
		{
			printf("%d + %d - %d = %d\n", x1, x2, x3, x1 + x2 - x3);
		}
	}
	else
	{
		if (ch4 == '+')
		{
			printf("%d - %d + %d = %d\n", x1, x2, x3, x1 - x2 + x3);
		}
		else
		{
			printf("%d - %d - %d = %d\n", x1, x2, x3, x1 - x2 - x3);
		}
	}
	return 0;
}
