//Ejercicio 10
//Escribir un programa en C que solicite numeros al usuario hasta que se hayan introducido 10 numero o la suma de todos los numeros leidos sea mayor a 100. Por ultimo mostrar un mensaje indicando que condicion se ha cumplido 

#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 100; i++) {
        printf("%d, ", i);
    }

    return 0;
}
