#include <iostream>
using namespace std;
int main()
{
    char letters[26];
    
    for(char i = 'A'; i <= 'G'; i += 2)
    {
    	letters[i - 'A'] = i;
 //   	cout.put(i) << endl;
 //   	cout << "index = " << i - 'A' << endl;
//ACEG 
    	cout << letters[i - 'A'];
	}
	cout << endl;
	return 0;
} 
