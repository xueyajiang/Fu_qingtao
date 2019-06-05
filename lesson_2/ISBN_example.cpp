#include <cstdio>
using namespace std;
int main()
{
	char ch[11]; 
	int i;
	int sum = 0;
	printf("«Î ‰»ÎISBN¬Î£∫");
	scanf("%c-%c%c%c-%c%c%c%c%c-%c", &ch[0], &ch[1], &ch[2], &ch[3], &ch[4], &ch[5], &ch[6], &ch[7], &ch[8], &ch[9]);
    ch[10] = '\0';
	printf("%s\n", ch);
    for (i = 1; i < 10; i++)
    {
    	sum = sum + i * (ch[i-1] - '0');
	}
//	printf("sum = %d\n", sum % 11);
	if ((sum % 11) == (ch[9] - '0'))
	{
		printf("Right!!!\n");
	}
	else
	{
		printf("Wrong!!!\n");
	}
	
    return 0;
}
