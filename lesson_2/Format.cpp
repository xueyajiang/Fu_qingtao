#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	/* 本节课主要内容格式化输入输出：
	   输入scanf  输出printf */
	int age = 10;
	unsigned int ef = 88877;
	printf("%u \n", ef);
	double Pi = 3.1415926;//00.1416
	printf("I am %d years old.\r\n", age);
	printf("Output Pi is %2.4f. \n", Pi);
	char name[] = "Russell";
	printf("I am %s, %d years old. \n", name, age);
	printf("Hello, I am %s. \n", name);
	printf("Hello, I am %10s. \n", name);
	printf("Hello, I am %-10s. \n", name);
	printf("Hello, I am %10.4s. \n", name);
	printf("Hello, I am %-10.4s. \n", name);
	printf("Hello, I am %10.14s. \n", name);
	printf("Hello, I am %-10.14s. \n", name);
	
	float e = 2.718;
	printf("e = %f (%%f) \n", e);
	printf("e = %10.5f (%%10.5f) \n", e);
	printf("e = %-10.5f (%%-10.5f) \n", e);
	printf("e = %10.2f (%%10.2f) \n", e);
	printf("e = %-10.2f (%%-10.2f) \n", e);
	printf("e = %10.f (%%10.f) \n", e);
	printf("e = %-10.f (%%-10.f) \n", e);
	printf("e = %6.2f (%%3.4f) \n", e); // 2.72
	printf("e = %.2f (%%.2f) \n", e);
	printf("e = %-.2f (%%-.2f) \n", e);
	
	int a = 10;
	printf("a = %d, a = %4d \n", a, a);
	return 0;
}
