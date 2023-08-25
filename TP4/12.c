/*
Fabrizio, De Biaggio 2023
Realizar un programa en C que lea una cadena y la encripte sumando 3 al c?digo
ASCII de cada car?cter. Mostrar por pantalla.
*/

#include <stdio.h>
#include <string.h>
int main(){
	char cadena[100];
	
	printf("Ingrese una cadena de texto: ");
	fgets(cadena, sizeof(cadena), stdin);
	
	int longitud = strlen(cadena);
	if(cadena[longitud - 1] == '\n'){
		cadena[longitud - 1] = '\0'; 
		longitud--;
	}
	
	for(int i = 0; i < longitud; i++){
		cadena[i] += 3;
	}	
	
	printf("\nTu cadena encriptada es %s", cadena);
	
	return 0;
}
