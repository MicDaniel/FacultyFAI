#include<stdio.h>
#include<conio.h>

int cmmdc(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = b;
		b = a % b;
		a = r;
	}
	return a;
}

void main()
{
	int m, n;

	printf("m= ");
	scanf_s("%d", &m);

	printf("n= ");
	scanf_s("%d", &n);

	printf("cmmdc=%d\n", cmmdc(m, n));
	printf("cmmmc=%d", m*n / cmmdc(m, n));

	_getch();
}