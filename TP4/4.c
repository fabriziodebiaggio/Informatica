/* Fabrizio, De Biaggio. 2023
Programa que indica la cantidad de notas iguales colocadas en 15 alumnos*/
#include<stdio.h>
int main()
{
	char alumnos[15];
	int notas[15];
	int cantidad[10]={0,0,0,0,0,0,0,0,0,0};
	printf("Coloque las notas en numeros enteros de los alumnos:\n");
	for (int i = 0; i<15; i++)
	{
		scanf("%d", &notas[i]);
		if (notas[i]>10 || notas[i]<1)
		{
			i=i-1;
			printf("Che capo, la nota tiene que ser de 1 a 10\n");
		}
		switch (notas[i])
		{
		case 1: cantidad[0]++;
		break;
		case 2: cantidad[1]++;
		break;
		case 3: cantidad[2]++;
		break;
		case 4: cantidad[3]++;
		break;
		case 5: cantidad[4]++;
		break;
		case 6: cantidad[5]++;
		break;
		case 7: cantidad[6]++;
		break;
		case 8: cantidad[7]++;
		break;
		case 9: cantidad[8]++;
		break;
		case 10: cantidad[9]++;
		break;
		}
	}
	printf("En total se colocaron:\n CANTIDAD | NOTA\n");
	for (int j = 0; j<10; j++)
	{
		if (cantidad[j] != 0)
		{
			int n_nota = j+1;
			printf("   %d ", cantidad[j]);
			printf("	     %d \n", n_nota);
		}
	}
}
