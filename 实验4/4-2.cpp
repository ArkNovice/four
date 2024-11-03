#include <stdio.h>
int main()
{
	int x,b0,b1,b2;
	printf("Please enter an integer x:");
	scanf("%d", &x);
	b2 = x / 100;
	b1 = (x - b2 * 100) / 10;
	b0 = x % 10;
	printf("bit0 = %d, bit1=%d,bit2=%d\n",b0,b1,b2);
	return 0;
}
