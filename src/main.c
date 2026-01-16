#include <stdio.h>
int main()
{
float lado, areaCuadrado,
volumenCubo;

printf("introduce la longitud del lado: ");
scanf("%f", &lado);
areaCuadrado = lado*lado;

//Operaciones del Cubo
// ya mañana las pongo cawn
volumenCubo = lado*lado*lado; 

printf("\nResultados para el cuadrado:\n");
printf("-Area: %.2f\n",areaCuadrado);

printf("\nResultados para el Cubo:\n");
printf("-Volumen: %.2f\n",volumenCubo);



return 0;
}

    
