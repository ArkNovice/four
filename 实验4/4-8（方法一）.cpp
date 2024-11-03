#include <stdio.h>
int main()
{
	int score;
	printf("Please enter score:");
	scanf("%d", &score);
	if(score<0||score>100)
	{
		printf("Input error!\n");
	}
	else if(score>=90)
	{
		printf("%d--A\n",score);
	}
	else if(score>=80)
	{
		printf("%d--B\n",score);
	}
	else if(score>=70)
	{
		printf("%d--C\n",score);
	}
	else if(score>=60)
	{
		printf("%d--D\n",score);
	}
	else
	{
		printf("%d--E\n",score);
	}
	return 0;
}
