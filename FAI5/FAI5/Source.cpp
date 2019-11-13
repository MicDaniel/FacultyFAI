#include<stdio.h>
#include<conio.h>


int nrPrime(int n);

void main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 2; i < n; i++) {
		if (nrPrime(i) == 1)
			printf("%d ", i);
	}
	if (nrPrime(n) == 1)
		printf("%d\n%d este numar prim", n, n);
	else
		printf("\n%d este numar compus", n);
	_getch();
}

int nrPrime(int n)
{
	for (int i = 2; i <= n / 2; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}
