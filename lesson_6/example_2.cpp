#include <iostream>
#include <cstdio> 
using namespace std;
void caculateRectangleArea()
{
	double a, b;
	
	cout << "�����볤���εĳ��Ϳ�";
	cin >> a >> b;
	printf("�����ε�����ǣ�%.2f \n", a * b); 
}
void caculateTriangleArea()
{
	double x, h;
	
	cout << "�����������εĵ׺͸ߣ�";
	cin >> x >> h;
	printf("�����ε�����ǣ�%.2f \n", x * h / 2);
}
void caculateCircleArea()
{
	double r;
	
	cout << "������Բ�İ뾶��";
	cin >> r;
	printf("Բ������ǣ�%.2f \n", 3.14 * r * r);
}
int main()
{
	int select;
	int exit = 0;
	
	do {
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "          ��ѡ�����ͼ�Σ�" << endl;
	    cout << endl;
	    cout << endl;
	    cout << "          1.������" << endl;
	    cout << "          2.������" << endl;
	    cout << "          3.Բ"     << endl;
	    cout << "          0.�˳�"   << endl;
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
			    cout << "����ѡ�����" << endl; 
		}
	} while (!exit);

	return 0;
}
