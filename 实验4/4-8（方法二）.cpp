#include<stdio.h>
int main()
{
	int score,mark;
	printf("Please enter score:");
	scanf("%d", &score);
	mark = score >= 0 && score <= 100 ? score/10 : -1;//对score进行预处理
	switch(mark)
	{
		case 10:
		case 9:printf("%d--A\n",score);
		       break;
		case 8:printf("%d--B\n",score);
		       break;
		case 7:printf("%d--C\n",score);
		       break;
		case 6:printf("%d--D\n",score);
		       break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: printf("%d--E\n",score);
		        break;
		default:printf("Input error!\n");
	 } 
	return 0;
}
