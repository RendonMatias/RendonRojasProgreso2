#include <stdio.h>
#include "ventas.h"

int main() {
    int n;
    float ventas[MAX_DIAS];

    printf("¿Cuantos dias desea registrar? (max 30): ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_DIAS) {
        printf("Numero invalido de dias.\n");
        return 1;
    }

    ingresarVentas(ventas, n);

    float total = calcularTotal(ventas, n);
    float promedio = calcularPromedio(ventas, n);
    float maxima = calcularMaxima(ventas, n);

    printf("\n========= RESULTADOS =========\n");
    printf("Total de ventas: %.2f\n", total);
    printf("Promedio de ventas: %.2f\n", promedio);
    printf("Venta maxima: %.2f\n", maxima);

    return 0;
}