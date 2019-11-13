#include<stdio.h>
#include<conio.h>
#include<math.h>

typedef struct ComplexNr {
	double real;
	double imag;
}complexNr;

complexNr add(complexNr z1, complexNr z2);
complexNr multiply(complexNr z1, complexNr z2);

int main() {

	complexNr z1, z2, temp;
	scanf_s("%f %f", &z1.real, &z1.imag);
	scanf_s("%f %f", &z2.real, &z2.imag);

	temp = add(z1, z2);
	printf("Suma z1 + z2 este: %.1f + (%.1fi)\n", temp.real, temp.imag);

	temp = multiply(z1, z2);
	printf("Produsul z1 * z2 este: %.1f + (%.1fi)\n", temp.real, temp.imag);
	
	printf("|z1| = %.1f", sqrt(z1.real*z1.real + z1.imag*z1.imag));
	printf("|z2| = %.1f", sqrt(z2.real*z2.real + z2.imag*z2.imag));


	_getch();
	return 0;
}

complexNr add(complexNr z1, complexNr z2)
{
	complexNr temp;
	temp.real = z1.real + z2.real;
	temp.imag = z2.imag + z2.imag;

	return temp;
}

complexNr multiply(complexNr z1, complexNr z2)
{
	complexNr temp;
	temp.real = z1.real * z1.real;
	temp.imag = z2.imag * z2.imag;

	return temp;
}
