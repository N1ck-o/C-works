#include "stdio.h"
#include <stdlib.h>

int main()
{
	double n;
	int k;
	n = 0;
	srand(time(NULL));
	k = rand()%100;
	printf("Hello! This is a simple game. You need to guess a number from 1 to 100.");
	while (n != k)
		{
		printf("Enter your number - ");
		scanf_s("%lf", &n);
			if (n < k)
				{
					printf("More\n");
				}
			if (n > k)
				{
					printf("Less\n");
				}
		}
	printf("You Win! Congratulations!");
	return 0;
}