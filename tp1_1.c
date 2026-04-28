#include <stdio.h>

int main(){

    printf("Hola mundo!\n");


    int numero = 10; //guarda el valor 10
    int *pNumero; //Declaramos puntero a entero
    pNumero = &numero; //pNumero guarda la direccion de memoria de "numero"


    printf("Contenido del puntero : %d\n", *pNumero); //1)
    printf("Direccion de memoria almacenada por el puntero: %p\n", pNumero);//2) = 3)
    printf("Direccion de memoria de la variable: %p\n", &numero);//2) = 3)
    printf("Direccion de memoria del puntero: %p\n", &pNumero);//4)
    printf("Tamanio de memoria de la variable: %zu bytes\n", sizeof(numero));//5)

    return(0);
}