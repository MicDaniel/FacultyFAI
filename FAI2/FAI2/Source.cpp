#include<stdio.h>
#include<conio.h>
void main()
{
	int n, p, q, r;

	printf("n= ");
	scanf_s("%d", &n);

	printf("p= ");
	scanf_s("%d", &p);

	printf("q= ");
	scanf_s("%d", &q);

	printf("r= ");
	scanf_s("%d", &r);

	int ct = 0;
	for (int i = 1; i <= n; i++) {
		if (i%p == 0 || i % q == 0 || i % r == 0)
			ct++;
	}

	printf("Sunt %d numere <= decat %d care sunt divizibile cu p,q sau r", ct, n);

	_getch();
}