#include<stdio.h>
#include<conio.h>

void adunare(int n);
void inmultire(int n);
void elemInvers(int n);
void elemNilpotent(int n);
void divizoriZero(int n);

int main() {
	int n;

	scanf_s("%d", &n);
	adunare(n);
	inmultire(n);
	elemInvers(n);
	elemNilpotent(n);
	divizoriZero(n);
	_getch();
	return 0;
}

void adunare(int n)
{
	printf("Z%d cu adunarea:\n", n);
	printf("+ ");
	for (int i = 0; i < n; i++)
		printf("%d ", i);
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", i);
		for (int j = 0; j < n; j++) {
			printf("%d ", (i + j) % n);
		}
		printf("\n");
	}
}

void inmultire(int n)
{
	printf("Z%d cu inmultirea:\n", n);
	printf("* ");
	for (int i = 0; i < n; i++)
		printf("%d ", i);
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", i);
		for (int j = 0; j < n; j++) {
			printf("%d ", (i * j) % n);
		}
		printf("\n");
	}
}

void elemInvers(int n)
{
	printf("Elementele inversabile sunt: ");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if ((i*j)%n == 1)
				printf("%d ", i);
	}
	printf("\n");
}

void elemNilpotent(int n)
{
	printf("Elementele nilpotente sunt: ");
	for (int i = 0; i < n; i++) {
		int p = 1;
		for (int j = 1; j <= n; j++) {
			p = p * i;
			if (p%n == 0) {
				printf("%d ", i);
				break;
			}
		}
	}
	printf("\n");
}

void divizoriZero(int n)
{
	printf("Divizorii lui zero sunt:");
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if ((i*j) % n == 0) {
				printf("%d ", i);
				break;
			}
		}
	}
	printf("\n");
}
