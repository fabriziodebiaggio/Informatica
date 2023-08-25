/* Fabrizio, De Biaggio. 2023
Programa para calcular el enésimo termino de la sucesión de Fibonacci.
La sucesión de Fibonacci los dos primeros numeros son 1 y el resto cada uno es
la suma de los dos anteriores, los primeros son: 1, 1, 2, 3, 5, 8, 13, 21,... */
#include <stdio.h>
int main() {
	int n, i, a = 1, b = 1, c;
	printf("Ingrese el valor del término que desea conocer de la sucesión de Fibonacci: ");
	scanf("%d", &n);
	if (n == 1 || n == 2) {
		c = 1;
	} else {
		for (i = 3; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
	}	
	printf("El enesimo termino de la sucesion de Fibonacci es: %d\n", c);
	return 0;
}
