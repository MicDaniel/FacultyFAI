#include<stdio.h>
#include<conio.h>
#include<cmath>

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

int prim(int n) {
	for (int i = 2; i <= n / 2; i++){
		if (n%i == 0)
			return 0;
	}
	return 1;
}

void main()
{
	int n;

	printf("n=");
	scanf_s("%d", &n);

	int ct = 0, v[50];
	printf("Divizorii lui %d sunt:\n", n);
	for (int i = 1; i <= n; i++) {
		if (n%i==0) {
			v[ct] = i;
			ct++;
			printf("%d ", i);
		}
	}
	printf("\n");
	if (ct == 2)
		printf("%d este numar prim", n);

	int d = 2;
	while (n > 1)
	{
		int p = 0;
		while (n%d == 0)
		{
			p++; 
			n = n / d; 
		}
		if (p > 0) {
			printf("%d^", d);
			printf("%d", p);
		}
		if(p)
			printf("*");
		d = d + 1; 
	}
	printf("\n");
	printf("Tabel pentru ^:\n");
	for (int i = 0; i <= v[i]; i++) {
		printf("%d: ", v[i]);
		for (int j = 0; j <= v[j]; j++) {
			printf("%d ", cmmdc(v[i],v[j]));
		}
		printf("\n");
	}

	printf("Tabel pentru |:\n");
	for (int i = 0; i <= v[i]; i++) {
		printf("%d: ", v[i]);
		for (int j = 0; j <= v[j]; j++) {
			printf("%d ", v[i]*v[j]/cmmdc(v[i], v[j]));
		}
		printf("\n");
	}

	int liber = 0;
	for (int i = 2; i <= n; i++) {
		if (n%i == 0)
			if ((int)sqrt(i) == sqrt(i))
				if (prim(sqrt(i)) == 1) {
					printf("%d nu este liber de patrate", n);
					liber = 1;
				}
	}

	if(liber==0)

	_getch();
}


