#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char gCard[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '@', 'J', 'Q', 'K'};
char getRandomCard()
{
	int index;
	srand(time(0));
	index = rand() % 13;
	return gCard[index];
}
double getScoreCard(char ch)
{
	double score = 0;
	switch (ch)
	{
		case 'A': score += 1; break;
		case '2':
		case '3':
		case '4':
	    case '5':
		case '6':
		case '7':
		case '8':
		case '9': score += ch - '0'; break;
		case '@': score += 10; break;
		case 'J':
		case 'Q':
		case 'K': score += 0.5; break;
		default:
			cout << "Get card point error." << endl;
	}
	return score;
}
int main()
{
	char card;
	double currentPoint;
	double total;
	total = 0;
	char command;
	int exit = 0; 
	do {
		card = getRandomCard();
		if (card == '@')
        {
        	cout << "你的牌：" << "10" << endl; 
		}
		else
		{
			cout << "你的牌：" << card << endl;
		}
		currentPoint = getScoreCard(card);
		total = total + currentPoint;
		cout << "你当前的分数：" << total << endl;
		if (total == 21)
		{
			cout << "恭喜，你赢了！" << endl;
			break;
		}
		else if (total > 21)
		{
			cout << "你输了！" << endl;
			break;
		}
		else
		{
			do {

			    cout << "你还想要牌吗？(Y/N)" << endl;
			    cin >> command;
			    if ((command == 'y') || (command == 'Y'))
                {
            	    break;
			    }
			    else if ((command == 'n') || (command == 'N'))
			    {
				    cout << "你的总分是：" << total << endl;
				    exit = 1;
				    break; 
			    }
			    else
				    continue;
			} while(1);
		} 
	} while(!exit);

	return 0;
}
