#include<stdio.h>
#include<conio.h>

void citireMatrice(int n, int A[][10]);
void afisareMatrice(int n, int A[][10]);
void produsMatrice(int n, int A[][10], int B[][10], int ProdusMatrice[][10]);
void transpusaMatrice(int n, int A[][10], int TranspusaMatrice[][10]);
bool simetrieMatrice(int n, int A[][10], int TranspusaMatrice[][10]);
int urmaMatricei(int n, int A[][10]);

int main() {
	int A[10][10], B[10][10], ProdusMatrice[10][10], TranspusaMatrice[10][10];
	int n;

	printf("n = ");
	scanf_s("%d", &n);

	citireMatrice(n, A);
	citireMatrice(n, B);

	printf("\nMatricea A este: \n");
	afisareMatrice(n, A);
	printf("\nMatricea B este: \n");
	afisareMatrice(n, B);
	
	printf("\nMatricea produs este: \n");
	produsMatrice(n, A, B, ProdusMatrice);
	afisareMatrice(n, ProdusMatrice);

	printf("\nUrma matricei A este: %d", urmaMatricei(n, A));
	printf("\nUrma matricei B este: %d", urmaMatricei(n, B));

	transpusaMatrice(n, A, TranspusaMatrice);
	printf("\nTranspusa Matricei A este:\n");
	afisareMatrice(n, TranspusaMatrice);
	printf("\n");

	if (simetrieMatrice(n, A, TranspusaMatrice) == true)
		printf("Matricea A este simetrica");
	else
		printf("Matricea B este antisimetrica");

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
}

void produsMatrice(int n, int A[][10], int B[][10], int ProdusMatrice[][10])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ProdusMatrice[i][j] = 0;
			for (int idx = 0; idx < n; idx++) {
				ProdusMatrice[i][j] += A[i][idx] * B[idx][j];
			}
			
		}
	} 
}

void transpusaMatrice(int n, int A[][10], int TranspusaMatrice[][10])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			TranspusaMatrice[i][j] = A[j][i];
		}
	}
}

bool simetrieMatrice(int n, int A[][10], int TranspusaMatrice[][10])
{
	bool simetrie = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i][j] != TranspusaMatrice[i][j])
				simetrie = false;
		}
	}
	if (simetrie == true)
		return true;
	else
		return false;
}

int urmaMatricei(int n, int A[][10])
{
	int urma = 0;
	for (int i = 0; i < n; i++) {
		urma += A[i][i];
	}
	return urma;
}
