#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	double x1, y1, x2, y2, q;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//	printf("%f \n", x1 - x2);
//	printf("%f \n", y1 - y2);
//	printf("%lf \n", ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
	q = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	
	printf("length = %.4f \n", q);	
	return 0;
}
