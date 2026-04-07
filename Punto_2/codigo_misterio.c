#include <stdio.h>

void invertir(int *p) {
    int temp = *p;
    int sign = (temp < 0) ? -1 : 1;
    int mag = temp * sign;
    int rev = 0;

    while (mag > 0) {
        rev = (rev * 10) + (mag % 10);
        mag = mag / 10;
    }

    *p = rev * sign;
}

void mitad_valor(int *p) {
    *p = *p / 2;
}

void f_gamma(int *p) {
    int temp = *p;
    int mag = (temp < 0) ? -temp : temp;
    int suma = 0;

    while (mag > 0) {
        suma = suma + (mag % 10);
        mag = mag / 10;
    }

    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    invertir(valor_referencia);
    mitad_valor(valor_referencia);
    f_gamma(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}