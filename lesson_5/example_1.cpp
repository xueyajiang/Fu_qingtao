#include <cstdio>
using namespace std;
int main()
{
	int a, b;
	char operate;
	scanf("%d %c %d", &a, &operate, &b);
	switch(operate)
	{
		case '+': printf("%d + %d = %d\n", a, b, a + b); 
		    break;
		case '-': printf("%d - %d = %d\n", a, b, a - b);
		    break;
		case '*': printf("%d * %d = %d\n", a, b, a * b);
		    break;
		case '/': ((a % b)==0) ? printf("%d / %d = %d", a, b, a / b) : printf("%d / %d = %.2f\n", a, b, float(a)/b);
		    break;
		default:
			printf("ÊäÈë²Ù×÷·û´íÎó£¡\n"); 
	} 
	return 0;
}
