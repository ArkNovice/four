#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c,disc,p,q;
	printf("Please enter a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	disc = b*b-4*a*c;
	p= - b / (2 * a);
	q=sqrt(disc)/(2*a);
	printf("x1 = %.4f,x2= %.4f\n",p+q,p-q);\
	return 0;
}
