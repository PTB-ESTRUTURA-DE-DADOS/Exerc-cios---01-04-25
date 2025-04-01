#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char *encontrar_caractere(char *texto_teste){

    while(*texto_teste != '\0'){

        if((unsigned char)*texto_teste > 127){
            return texto_teste;
        }
        texto_teste++;
    }
    return NULL;
}


int main(void){

    setlocale(LC_ALL, "Portuguese");

    char texto_teste[] = "Morrer com a faca no peito e o queijo na chão";
    char *pstr = encontrar_caractere(texto_teste);

    if (pstr != NULL) {
        printf("Caractere fora do ASCII encontrado: '%c'\n", *pstr);
    } else {
        printf("Todos os caracteres estão dentro do ASCII.\n");
    }

    return 0;
}