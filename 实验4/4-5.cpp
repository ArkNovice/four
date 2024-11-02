#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPS 1e-6
int main()
{
	float a,b,c,disc,p,q;
	printf("Please enter a,b,c:");
	scanf("%f, %f, %f", &a, &b ,&c);
	if(fabs(a)<= EPS)
	{
		printf("It is not a quadratic equation!\n");
		exit(0);
	}
	disc = b*b-4*a*c;
	p=-b/(2*a);
	q= sqrt(fabs(disc))/(2*a);
	if(fabs(disc)<= EPS)
	{
		printf("Two equal real roots: x1=x2=%6.2f\n",p);
	}
	else if(disc>EPS)
	{
		printf("Two unequal real roots: x1=%6.2f,x2=%6.2f\n",p+q,p-q);
	}
	else
	{
		printf("Two complex roots:\n");
		printf("x1=%6.2f + %6.2fi\n",p,q);
		printf("x2=%6.2f-%6.2fi\n",p,q);
	}
	return 0;
}
