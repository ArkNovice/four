#include <stdio.h>
int a;
int main()
{
	printf("*****Time*****\n");
	printf("1 morning\n");
	printf("2 afternoon\n");
	printf("3 night\n");
	printf("Please enter your choice:");
	scanf("%d", &a);
	switch (a)
	{
		case 1:
			printf("Good morning");
			break;
		case 2:
			printf("Good afternoon");
			break;
		case 3:
			printf("Good night");
			break;
		default:
			printf("error");
	}
	return 0;
}
