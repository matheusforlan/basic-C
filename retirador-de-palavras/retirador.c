#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char linha[1000];
    char palavra[25];

    printf("Linha de entrada: ");
    gets (linha);
    printf("Palavra a ser buscada: ");
    gets(palavra);
    
    char *arrayTokens[100];
    char * token;
    token = strtok(linha, " ,.!");
    char *palavraPtr = palavra;
    int comparador = -1;
    
    while(token != NULL){
        
        comparador = strcmp(token, palavra);
        if(comparador != 0){
            printf("%s ", token);
        }
        
        token = strtok(NULL, " ,.!");
        
    }
    
 
    

    return 0;
}



