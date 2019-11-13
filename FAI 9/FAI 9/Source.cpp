#include<stdio.h>
#include<math.h>
#include<conio.h>

int valoareInPunct(int p[20], int n, int x);
void afisare(int n, int p[]);
int divizoriIntregi(int n, int p[]);

int main() {
	int p[20], n, x;
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("x%d= ", i);
		scanf_s("%d", &p[i]);
	}
	printf("\n");
	afisare(n, p);
	printf("\n");

	scanf_s("%d", &x);
	printf("Valoarea polinomului in punctul %d este: %d \n", x, valoareInPunct(p, n, x));

	if (divizoriIntregi(n, p) == 1)
		printf("Polinomul ales are radacini intregi sau rationale");
	else
		printf("Polinomul ales nu are radacini intregi sau rationale");
	_getch();
	return 0;
}

int valoareInPunct(int p[20], int n, int x)
{
	int valoare = 0;
	for (int i = 0; i <= n; i++) {
		valoare = valoare + p[i] * pow(x, i);
	}
	return valoare;
}

int divizoriIntregi(int n, int p[])
{
	int termenLiber = p[0];
	if (termenLiber < 0) {
		termenLiber *= -1;
		}
	for (int i = 1; i <= termenLiber; i++) {
		if (termenLiber%i == 0) {
			if (valoareInPunct(p, n, i) == 0 || valoareInPunct(p,n, -1*i) == 0)
				return 1;
		}
	}
	return 0;
}

void afisare(int n, int p[100])
{
	for (int i = n; i > 0; i--) {
		if (p[i]) {
			printf("(%d*X^%d)", p[i], i);
			printf(" + ");
		}
	}
	if (p[0])
		printf("(%d)", p[0]);
}
