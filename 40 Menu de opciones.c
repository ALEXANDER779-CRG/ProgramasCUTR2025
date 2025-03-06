/*
Suma de cantidad de numeros introducidos (version 1)
Enrique Alexander Campos Olascoaga
TMSD1C
*/
#include <stdio.h>

int main() {
    int opcion, numero;

    do {
        // Mostrar el menú
        printf("\n--- Menú de opciones ---\n");
        printf("1. Calcular el doble de un número entero.\n");
        printf("2. Calcular la mitad de un número entero.\n");
        printf("3. Calcular el cuadrado de un número entero.\n");
        printf("4. Salir.\n");
        printf("Seleccione una opción (1-4): ");
        scanf("%d", &opcion);

        // Ejecutar la opción seleccionada
        switch (opcion) {
            case 1:
                printf("Ingrese un número entero: ");
                scanf("%d", &numero);
                printf("El doble de %d es: %d\n", numero, numero * 2);
                break;

            case 2:
                printf("Ingrese un número entero: ");
                scanf("%d", &numero);
                printf("La mitad de %d es: %.2f\n", numero, (float)numero / 2);
                break;

            case 3:
                printf("Ingrese un número entero: ");
                scanf("%d", &numero);
                printf("El cuadrado de %d es: %d\n", numero, numero * numero);
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida. Por favor, seleccione una opción del 1 al 4.\n");
                break;
        }
    } while (opcion != 4); // Repetir hasta que el usuario seleccione la opción 4 (Salir)

    return 0;
}