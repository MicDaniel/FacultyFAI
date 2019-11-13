#include<stdio.h>
#include<conio.h>

void afisare(int n, int p[100]);
void suma(int n, int m, int p1[100], int p2[100]);
void produs(int n, int m, int p1[100], int p2[100]);

int main() {
	int P1[100], P2[100];
	int n, m;

	printf("Introduceti gradul polinomului 1: ");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		printf("a%d= ", i);
		scanf_s("%d", &P1[i]);
	}

	printf("Introduceti gradul polinomului 2: ");
	scanf_s("%d", &m);
	for (int i = 0; i <= m; i++) {
		printf("b%d= ", i);
		scanf_s("%d", &P2[i]);
	}

	afisare(n, P1);
	printf("\n");
	afisare(m, P2);
	printf("\n");
	suma(n, m, P1, P2);
	printf("\n");
	produs(n, m, P1, P2);


	_getch();
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
	if(p[0])
		printf("(%d)", p[0]);
}

void suma(int n, int m, int p1[100], int p2[100])
{
	int p3[100];
	int k = 0;
	if (n > m)
	{
		while (k<=m) {
			p3[k] = p2[k] + p1[k];
			k++;
		}
		while (k<=n) {
			p3[k] = p1[k];
			k++;
		}
	}
	else
		while (k<=n) {
			p3[k] = p2[k] + p1[k];
			k++;
		}
	while (k<=m) {
		p3[k] = p2[k];
		k++;
	}
	k--;
	afisare(k, p3);
}

void produs(int n, int m, int p1[100], int p2[100])
{
	int k, p3[200];
	for (int i = 0; i <= n + m; i++) {
		p3[i] = 0;
	}
	for (int i = 0; i <= n; i++) {
		if (p1[i]) {
			for (int j = 0; j <= m; j++) {
				if (p2[j]) {
					p3[i + j] += p1[i] * p2[j];
				}
			}
		}
	}
	k = n + m;
	afisare(k, p3);
}

