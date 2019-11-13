#include<stdio.h>
#include<conio.h>

void citireMatrice(int n, int A[][10]);
void afisareMatrice(int n, int A[][10]);
int determinatGr3(int n, int A[][10]);
int determinatGr2(int n, int A[][10]);

int main() {
	int n;
	int A[10][10];
	
	printf("n = ");
	scanf_s("%d", &n);

	citireMatrice(n, A);
	printf("\n");
	afisareMatrice(n, A);

	if(n==2)
		printf("Determinantul matricei A este: %d", determinatGr2(n, A));
	else
		if(n==3)
			printf("Determinantul matricei A este: %d", determinatGr3(n, A));
	_getch();
	return 0;
}

void citireMatrice(int n, int A[][10])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("A[%d][%d] = ", i, j);
			scanf_s("%d", &A[i][j]);
		}
	}
}

void afisareMatrice(int n, int A[][10])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int determinatGr2(int n, int A[][10])
{
	int determinant = 0;
	determinant = A[0][0] * A[1][1] - A[0][1] * A[1][0];
	return determinant;
}

int determinatGr3(int n, int A[][10])
{
	int determinant = 0;
	int diagPrincipala = 1, diagSecundara = 1;
	for (int i = 0; i < n; i++) {
		diagPrincipala *= A[i][i];
		diagSecundara *= A[i][n - i - 1];
	}
	determinant = diagPrincipala - diagSecundara + A[0][1]*A[1][2]*A[2][0] + A[1][0]*A[2][1]*A[0][2]
		-A[0][0]*A[1][2]*A[2][1] - A[2][2]*A[0][1]*A[1][0];
	return determinant;
}
