//Escriba un programa que pida al usuario un numero, y muestre el mensaje "has introducido el numero__""(mostrando el numero que ha introducido):Esta accion debe repetirse hasta que el usuario introduzca el numero 0. 
//En este momento se mostrara el mensaje "Finalizado: Se ha introducido el numero 0". Ademas, se debe mostrar cuantos numeros se han introducido y su suma.

#include <stdio.h>

int main() {
    int numero;
    int suma = 0;
    int c = 0;

    do {
        printf("introduce un número : ");
        scanf("%d", &numero);

        if (numero != 0) {
            suma += numero;
            c++;
        }

    } while (numero != 0);

    printf("se ha introducido el número 0\n");
    printf("cantidad de números: %d\n", contador);
    printf("suma: %d\n", suma);

    return 0;
}
