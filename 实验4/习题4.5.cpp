#include<stdio.h>
int year,month,day; 
int main()
{
	printf("输入年份: ");
    scanf("%d", &year);
    printf("输入月份: ");
    scanf("%d", &month);
	switch(month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		     day = 31;
		     break;
		case 4: case 6: case 9: case 11:
		     day=30;
		     break;
		case 2:
		if((0 == year % 4 && 0 != year %100) || (400 == year % 4))
		{
			day = 29;
		}
		else
		{
			day = 28;
		}
		break;
		default:printf("输入的月份不准确"); 
		return 1;
	}
	printf("该月有%d天", day);
	return 0;
}
