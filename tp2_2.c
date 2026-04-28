#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float funcionCuadrado(float x){
    float resultado = x*x;
    return (resultado);
}

void mostrarCuadrado(float x){
    float resultado = x*x;
    printf("El cuadrado de %.0f, es: %.2f\n",x,resultado);
}

void Invertir(int *a, int *b){

    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void Orden(int *min, int *max){
    int aux;

   if(*min>*max){
    aux = *min;
    *min = *max;
    *max = aux;
   }
}

int main () {

    //a)
    float cuadrado = funcionCuadrado(3);
    printf("el cuadrado 3 es: %.2f\n", cuadrado);

    //b)
    mostrarCuadrado(5);

    //c)
    int y;
    printf("Ingrese una variable: \n");
    scanf("%d", &y);

    //direccion
    printf("DIRECCION : %p\n", &y);
    //contenido 
    printf("CONTENIDO: %d\n", y);



    //d)
    int a = 5;
    int b = 6;

    printf("ANTES: a=%d, y=%d\n", a, b);
    Invertir(&a, &b);
    printf("DESPUES: a=%d, y=%d\n", a, b);



    //e)
    int max = 5;
    int min = 9;

    Orden(&min,&max);

    printf("menor: %d\n", min);
    printf("maximo: %d\n", max);
    return 0;
}