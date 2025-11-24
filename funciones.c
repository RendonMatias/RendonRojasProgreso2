
#include <stdio.h>
#include "ventas.h"

void ingresarVentas(float ventas[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese venta del dia %d: ", i + 1);
        scanf("%f", &ventas[i]);
    }
}

float calcularTotal(float ventas[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += ventas[i];
    }
    return total;
}

float calcularPromedio(float ventas[], int n) {
    float total = calcularTotal(ventas, n);
    return total / n;
}

float calcularMaxima(float ventas[], int n) {
    float max = ventas[0];
    for (int i = 1; i < n; i++) {
        if (ventas[i] > max) {
            max = ventas[i];
        }
    }
    return max;
}
