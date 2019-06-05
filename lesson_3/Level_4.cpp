#include <iostream>
using namespace std;
int main()
{
	int a = 11, b = 3;
	double c = 5, d = 2.5; // 
	cout << (int) (a / c) + b * d << endl;
	//11.0 / 5.0 2.2+ 3.0 * 2.5 =  
	
	char name[20] = "I m Lisa.";
	cout << name << endl;
	name[1] = '\'';
	cout << name << endl;
/*	10101011  补码：负数的补码 1 其他位取反， 加1 
    1 0101010  
    1 1010101
         64 32 16 8 4 2 1
		 64 + 16 + 4 + 1 = -85 */
	return 0;
}
