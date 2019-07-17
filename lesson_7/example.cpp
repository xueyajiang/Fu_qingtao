#include <iostream>
using namespace std;
void swapInt(int *a, int *b)
{
	cout << "swapInt" << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swapDouble(double *a, double *b)
{
	cout << "swapDouble" << endl;
	double temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int num;
	cin >> num;
	int studentId[num] = {0};
	double languageScore[num];
	double mathScore[num];
	double englishScore[num];
	double totalScore[num] = {0};
	
	for (int i = 0; i < num; i++)
	{
		cin >> languageScore[i] >> mathScore[i] >> englishScore[i];
		studentId[i] = i + 1;
		totalScore[i] = languageScore[i] + mathScore[i] + englishScore[i];
	}
	
	for (int i = num-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (totalScore[j] > totalScore[j+1])
			{
				swapInt(&studentId[j], &studentId[j+1]);
				swapDouble(&totalScore[j], &totalScore[j+1]);
				swapDouble(&languageScore[j], &languageScore[j+1]);
				swapDouble(&mathScore[j], &mathScore[j+1]);
				swapDouble(&englishScore[j], &englishScore[j+1]);
			}
			else if ((totalScore[j] == totalScore[j+1]) && (languageScore[j] > languageScore[j+1]))
			{
				swapInt(&studentId[j], &studentId[j+1]);
				swapDouble(&totalScore[j], &totalScore[j+1]);
				swapDouble(&languageScore[j], &languageScore[j+1]);
				swapDouble(&mathScore[j], &mathScore[j+1]);
				swapDouble(&englishScore[j], &englishScore[j+1]);
			}
			else if ((totalScore[j] == totalScore[j+1]) && (languageScore[j] == languageScore[j+1]) && 
			         (studentId[j] > studentId[j+1]))
			{
			    swapInt(&studentId[j], &studentId[j+1]);
				swapDouble(&totalScore[j], &totalScore[j+1]);
				swapDouble(&languageScore[j], &languageScore[j+1]);
				swapDouble(&mathScore[j], &mathScore[j+1]);
				swapDouble(&englishScore[j], &englishScore[j+1]);
			}
		}
	}
	int count = 0;
	for (int i = num - 1; i > 0; i--)
	{
		cout << studentId [i] << " " << totalScore[i] << endl;
		count++;
		if (count == 6)
		    break;
	}
	return 0;
}
