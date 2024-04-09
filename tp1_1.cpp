#include <stdio.h>
#include <stdlib.h>

int main (){

    int v = 10; 
    int *p = &v;

    // 1) 
    printf("El contenido del puntero: %d\n", *p);

    // 2) 
    printf("La dirección de memoria almacenada por el puntero: %p\n", p);

    // 3) 
    printf("La dirección de memoria de la variable: %p\n", &v);

    // 4) 
    printf("La dirección de memoria del puntero: %p\n", &p);

    // 5)
    printf("El tamaño de memoria utilizado por esa variable: %zu bytes\n", sizeof(v));

    return 0;
}
