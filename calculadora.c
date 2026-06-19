#include <stdio.h>

void suma();
float resta(float, float);
void multiplicacion();
float division(float, float);

int main() {
    int opcion;
    float a, b, resultado;

    do {
        printf("\nMenu de Operaciones\n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Multiplicaciones\n");
        printf("4.- Division\n");
        printf("5.- Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                suma();
                break;

            case 2:
                printf("Ingresa el primer numero: ");
                scanf("%f", &a);
                printf("Ingresa el segundo numero: ");
                scanf("%f", &b);

                resultado = resta(a, b);
                printf("Resultado de la resta: %.2f\n", resultado);
                break;

            case 3:
                multiplicacion();
                break;

            case 4:
                printf("La division sera completada por el segundo integrante.\n");
                break;

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
                break;
        }

    } while (opcion != 5);

    return 0;
}

void suma() {
    float a, b;

    printf("Ingresa el primer numero: ");
    scanf("%f", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);

    printf("Resultado de la suma: %.2f\n", a + b);
}

float resta(float a, float b) {
    return a - b;
}

void multiplicacion() {
    printf("La multiplicacion sera completada por el segundo integrante.\n");
}

float division(float a, float b) {
    return 0;
}
