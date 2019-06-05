#include <cstdio>
using namespace std;
int main()
{
	int number;
	int i;
	int j;
	scanf("%d", &number);
	if ((number < 0) || (number > 65536))
	{
		printf("Input number is invalid!\n");
		return -1;
	}
	
	for (i = 1; i <= number; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf ("%d * %d = %d  ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
