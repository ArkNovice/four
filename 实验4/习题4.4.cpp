#include<stdio.h>
#include<math.h>
int main() 
{
    double a, b, c, d, e;
    printf("�����������ε�����: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a) 
	{
        printf("�ⲻ��һ��������\n");
    } 
	else 
	{
        if (fabs(a - b) < 0.1 || fabs(a - c) < 0.1 || fabs(b - c) < 0.1) 
		{
            printf("����һ������������\n");
        }
        d = a * a + b * b;
        e = c * c;
        if (fabs(d - e) < 0.1 || fabs(e - d) < 0.1) 
		{
            printf("����һ��ֱ��������\n");
        } 
		else 
		{
            printf("����һ����ͨ������\n");
        }
    }
    return 0;
}
