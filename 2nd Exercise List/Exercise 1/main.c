//1. Declare um vetor de caracteres contendo seu nome. Imprima-o e confirme que está tudo
//certo. Depois escreva um laço que procura o caracter \0 no vetor e coloca um ’.’ sobre ele.
//Imprima seu nome outra vez.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = {'O', 'C', 'T', 'A', 'V', 'I', 'O', '\0'};

    printf("%s", name);

    for(int i = 0; i < strlen(name); i++) {
        if(name[i] == '\0') {
            name[i] = '.';
        }
    }

    return 0;
}
