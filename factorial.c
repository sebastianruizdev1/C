#include <stdio.h>
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main(){
    int numero;
    printf("Ingrese un numero entero no negativo: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        printf("El factorial de %d es: %d\n", numero, factorial(numero));
    }

    return 0;
}