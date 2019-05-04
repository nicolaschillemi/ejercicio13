#include <stdio.h>

void main()

{

    float celsius;
    float resultado;


    printf("Ingresar grados Celsius: ");
    scanf("%f",&celsius);

    resultado = celsius * 9/5 + 491.67;

    printf("En grados Rankine son: %f",resultado);

}