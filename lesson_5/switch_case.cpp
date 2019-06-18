#include <iostream>
using namespace std;
int main()
{
	/* 本节课主要讲解： switch case语句 */
	char ch;
	cin >> ch;
	char str = 'D';
	int ch1 = -3;
	int ch2 = 1;
	
	switch(ch1)
	{
		case 'A': cout << "A"; 
		case 'B': cout << "B"; break;
		case 'C': cout << "C";
		case -3 / 1 : cout << "D";
		case -1 : cout << "E";
		default: cout << "*";
	}
	cout << "------------------------" << endl;
	ch = 1;
	switch (ch)
	{ // 5 || 7   1   逻辑或 
	//   0 || 0   0
	//   8 || 0   1
	//   9 && 0   0   逻辑与 
	//   9 && 11  1 
	//   0 && 0   0
	//   !9       0   非
	//   5 & 7    101 & 111     101（5）  按位与 
	//   0 & 0                  0
	//   8 & 0                  0
	//   9 | 0   1001 | 0      1001 (9)   按位或 
		case 'a' || 'A':  cout << "The first letter." << endl; break;
		case 'b':
		case 'B': cout << "The second letter." << endl; break;
		case 'c':
		case 'C': cout << "The third letter." << endl; break;
		default: cout << "Other letters." << endl;
	}
	
/*	double d;
	cin >> d;
	switch(d)
	{
		case 3.14:
		{
			cout << "PI" << endl;
			break;
		}
	    case 1.414:
		{
		    cout << "Sqrt 2" << endl;
		    break;
		}
	}
*/
    int a, b = 1;
    cin >> a;
    switch(a)
    {
    	case b: cout << "a = b" << endl;
    	    break;
    	case b + 1: cout << "a = b + 1" << endl;
    	    break;
	}

/*    int a;
    cin >> a;
    switch (a)
    {
    	case > 10: cout << "larger than 10." << endl;
    	    break;
    	case < 10: cout << "less than 10." << endl;
    	    break;
	}
*/
	return 0;
}
