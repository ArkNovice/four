#include <math.h>
#include <stdio.h>
int main()
{
	int n;
	double rate = 0.0225;
	double capital;
	double deposit;
	printf("Please enter year, capital:");
	scanf("%d,%lf", &n, &capital);
	deposit = capital * pow(1+rate, n);
	printf("deposit = %f\n", deposit);
	return 0;
 } 
