#include <stdio.h>

int main() {
    int base;
    printf("digite a base da potencia: ");
    scanf("%d", &base);

    int exp;
    printf("digite o expoente: ");
    scanf("%d", &exp);

    int s = 1;
    for (int i = 0; i < exp; i++) {
        s = s * base;
    }
    printf("%d", s);
    return 0;
}
