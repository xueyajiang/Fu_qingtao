#include <iostream>
#include <cstdio> 
using namespace std;
void caculateRectangleArea()
{
	double a, b;
	
	cout << "请输入长方形的长和宽：";
	cin >> a >> b;
	printf("长方形的面积是：%.2f \n", a * b); 
}
void caculateTriangleArea()
{
	double x, h;
	
	cout << "请输入三角形的底和高：";
	cin >> x >> h;
	printf("三角形的面积是：%.2f \n", x * h / 2);
}
void caculateCircleArea()
{
	double r;
	
	cout << "请输入圆的半径：";
	cin >> r;
	printf("圆的面积是：%.2f \n", 3.14 * r * r);
}
int main()
{
	int select;
	int exit = 0;
	
	do {
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "          请选择何种图形：" << endl;
	    cout << endl;
	    cout << endl;
	    cout << "          1.长方形" << endl;
	    cout << "          2.三角形" << endl;
	    cout << "          3.圆"     << endl;
	    cout << "          0.退出"   << endl;
	    cout << endl;
    	cout << endl;
	    cout << endl;
    	cin >> select;
	    switch (select)
	    {
	    	case 1: caculateRectangleArea(); break;
			case 2: caculateTriangleArea(); break;
			case 3: caculateCircleArea(); break;
			case 0: exit = 1; break;
			default:
			    cout << "输入选项错误！" << endl; 
		}
	} while (!exit);

	return 0;
}
