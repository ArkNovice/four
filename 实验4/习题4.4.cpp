#include<stdio.h>
#include<math.h>
int main() 
{
    double a, b, c, d, e;
    printf("请输入三角形的三边: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a) 
	{
        printf("这不是一个三角形\n");
    } 
	else 
	{
        if (fabs(a - b) < 0.1 || fabs(a - c) < 0.1 || fabs(b - c) < 0.1) 
		{
            printf("这是一个等腰三角形\n");
        }
        d = a * a + b * b;
        e = c * c;
        if (fabs(d - e) < 0.1 || fabs(e - d) < 0.1) 
		{
            printf("这是一个直角三角形\n");
        } 
		else 
		{
            printf("这是一个普通三角形\n");
        }
    }
    return 0;
}
