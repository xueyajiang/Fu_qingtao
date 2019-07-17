#include <iostream>
using namespace std;
int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int months;
int years;
int main()
{
	int startDate;
	int endDate;
    int i, j;
    int date = 0;
    int counter = 0;
    cin >> startDate >> endDate;
    
	for (i = 1; i <= 12; i++)
	{
		
		for (j = 1; j <= days[i]; j++, date = 0)
		{
//			cout << "j = " << j << endl;
//			cout << (j % 10) * 1000 << " " << (j / 10) * 100 << " " << (i % 10) * 10 << " " <<i / 10 << endl;
		    date = date + (j % 10) * 1000 + (j / 10) * 100 + (i % 10) * 10 + i / 10;
//		    cout << date << endl;
	        if ((date < (startDate/10000)) || (date > (endDate / 10000)))
	            continue;
	        cout << date << date << endl;
	        counter++;
		}
	}
	cout << counter << endl;
	return 0;
}
