#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    int soma =0;
    float media = 0;
    
    for (int i = 0; i< 6; i++){
        char numero[1000];
        printf("Digite o %dº número: ",i+1);
        gets(numero);
        
        int numeroInteiro = atoi(numero);
        soma = soma + numeroInteiro;
        
    }
    
    media = soma/6;

    
    printf("A soma vale: %d e a média vale: %.2f", soma, media);
    return 0;
}


