//2. Escreva uma função que recebe um vetor de 100 caracteres que representa uma linha de
//texto contendo palavras separadas por espaços em branco, e imprime as palavras dessa
//linha, uma de cada vez. Na saída, tente não deixar linhas em branco.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printWords(char words[100]) {
    int size = strlen(words);
    for(int i = 0; i < size; i++) {
        char c = words[i];
        if(c == ' ') {
            printf("\n");
        } else {
            printf("%c", words[i]);
        }
    }
}


int main()
{
    char words[100] = "Hello World! I am a C Programmer!";
    printWords(words);
    return 0;
}
