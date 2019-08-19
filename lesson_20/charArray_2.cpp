#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char arr[10] = "what?";
	int len_one = strlen(arr);
	int len_two = sizeof(arr);
	cout << len_one << " and " << len_two << endl;
	return 0;
}
