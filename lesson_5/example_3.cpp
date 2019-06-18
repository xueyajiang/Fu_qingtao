#include <iostream>
using namespace std;
int main()
{
	char context[10000];
	int i;
	int vowels, consonants;
	vowels = 0;
	consonants = 0;
	i = 0;
	cin.get(context, 10000);
	
	while (context[i] != '\0')
	{   cout << context[i] << endl;
		switch (context[i])
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': vowels++; break;
			case ' ':
			case ',':
			case '.': break;
			default:
				if (((context[i] >= 'a') && (context[i] <='z')) || (((context[i]) >= 'A') && (context[i] <= 'Z')))
				{
					consonants++;
					cout << consonants << endl;
				}
				else
				{
					cout << "Other letter! " << cout.put(context[i]) << endl;
				}
		}
		i++;
	}
	cout << vowels << "   " << consonants << endl;
	return 0;
}
