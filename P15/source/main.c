#include <stdio.h>
#include <stdlib.h>

int maxium(int a, int b, int c);

int main(void)
{
	int number1, number2, number3;
	printf("Enter three integers:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	printf("Maxium is %d\n", maxium(number1, number2, number3));
	system("pause");
	return 0;
}

int maxium(int a, int b, int c)
{
	int max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	return max;
}