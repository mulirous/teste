#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "calculos.h"

int main(){
    FILE* arquivo;
    int a, quad = 0, cb = 0;
    double rsqrt = 0;

    arquivo = fopen("calculo.txt", "a");

    if (arquivo == NULL){
        printf("\nERROR!\n");
        printf("\nErro %s ao executar o programa.\n", strerror(errno));
    }
    else{
        printf("Digite um número: ");
        scanf("%d", &a);
        fprintf(arquivo, "\n\nNúmero %d\n", a);

        quad = quadrado(a);
        cb = cubo(a);

        fprintf(arquivo, "\nO quadrado de %d é: %d\n", a, quad);
        fprintf(arquivo, "\nO cubo de %d é: %d", a, cb);

        printf("\nO programa foi executado.\n");

        fclose(arquivo);
    } 

    return 0;
}