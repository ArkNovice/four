#include <stdio.h>
#include<stdlib.h>
int main()
{
	int magic;
	int guess;
	magic=rand();
	printf("Please guess a magic number:");
	scanf("%d", &guess);
	if(guess>magic)
	{
		printf("Wrong!Too high!\n");
	}
	else if(guess<magic)
	{
		printf("Wrong!Too low!\n");
	}
	else
	{
		printf("Right!\n");
		printf("The number is:%d\n",magic);
	}
	return 0;
}
