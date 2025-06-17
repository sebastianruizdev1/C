#include <stdio.h>
int main(){
        int n, a = 0, b = 1, c;

    printf("Ingrese el número de términos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número de términos debe ser mayor que cero.\n");
        return 1;
    }

    printf("Serie Fibonacci: ");
    if (n >= 1) {
        printf("%d ", a);
    }
    if (n >= 2) {
        printf("%d ", b);
    }

    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}