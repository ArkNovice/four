#include <stdio.h>
int main()
{
	int a,b;
	printf("Please enter a,b:");
	scanf("%d%d", &a, &b);
	if(a>=b)
	{
		printf("max=%d\n",a);
	 } 
	 if(a<b)
	 {
	 	printf("max=%d\n",b);
	 }
	return 0;
}
