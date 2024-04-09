#include <stdio.h>

// a) Función que devuelve el cuadrado de un número
int Cuadrado(int num) {
    return num * num;
}

// b) Función que devuelve el cuadrado de un número, pero con tipo de retorno void
void Cuadrado_void(int num) {
    printf("El cuadrado de %d es: %d\n", num, num * num);
}

// c) Función que muestra la dirección y contenido de una variable
void MostrarDireccionContenido(int var) {
    printf("Dirección de la variable: %p, Contenido de la variable: %d\n", (void *)&var, var);
}

// d) Función para invertir los valores entre dos variables
void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// e) Función para ordenar dos variables de forma ascendente
void Orden(int *a, int *b) {
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

// f) Función para leer pares de valores y utilizar las funciones anteriores
void LeerYImprimir() {
    int x, y;
    printf("Ingrese dos números separados por espacio:\n");
    while (scanf("%d %d", &x, &y) == 2) {
        // Utilizando las funciones definidas arriba
        Cuadrado_void(x);
        MostrarDireccionContenido(x);
        MostrarDireccionContenido(y);
        Invertir(&x, &y);
        printf("Después de invertir: %d %d\n", x, y);
        Orden(&x, &y);
        printf("Después de ordenar: %d %d\n", x, y);
        printf("\nIngrese dos números separados por espacio (o Ctrl+C para salir):\n");
    }
}

int main() {
    // Llamada a la función LeerYImprimir()
    LeerYImprimir();
    return 0;
}
# tl1-tp1-2024-gabolemoine
