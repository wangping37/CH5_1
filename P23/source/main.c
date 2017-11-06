#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Status { Continue, Won, Lost };
int rollDice(void);

int main(void)
{
	int mypoint;
	int sum;
	enum Status gameStatus;

	srand(time(NULL));
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = Won;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = Lost;
		break;
	default:
		gameStatus = Continue;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}
	while (gameStatus == Continue)
	{
		sum = rollDice();
		if (sum == mypoint)
		{
			gameStatus = Won;
		}
		else if (sum == 7)
		{
			gameStatus = Lost;
		}
	}
	if (gameStatus == Won)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("player loses\n");
	}
	system("pause");
	return 0;
}

int rollDice(void)
{
	int die1, die2;
	int worksum;
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;
	printf("Player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}