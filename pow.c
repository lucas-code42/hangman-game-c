#include <stdio.h>

int pow_(int base, int exp) {
    int r = 1;
    for (int i = 0; i < exp; i++) {
        r = r * base;
    }
    return r;
}


int main() {
    int base;
    printf("digite a base da potencia: ");
    scanf("%d", &base);
    
    int exp;
    printf("digite o expoente: ");
    scanf("%d", &exp);

    int r = pow_(base, exp);
    printf("Potencia = %d\n", r);
    return 0;
}
