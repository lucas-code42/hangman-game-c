#include <stdio.h>

int main() {
    // array de char
    char secretWord[20];

    // string print formated
    // A função sprintf(), análoga a printf é a que nos ajuda a escrever palavras dentro de arrays de char.
    sprintf(secretWord, "Teste e Teste\n");
    printf("%s", secretWord);

    /*
    percent s só consegue saber o momento certo de parar de imprimir a string 
    pq implicitamente a última posição da string tem '\0' que indica que a string acabou
    */
    return 0;
}