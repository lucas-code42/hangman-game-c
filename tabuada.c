#include <stdio.h>

void abertura(int m) {
    printf("Apresentando a tabuada do numeral %d\n\n", m);
    return;
}

int main() {
    int multiplicador;
    scanf("%d", &multiplicador);

    abertura(multiplicador);
    
    int count = 10;
    for (int i = 1; i <= count; i++) {
        printf("%d x %d = %d\n", multiplicador, i, multiplicador*i);
    }

    return 0;
}