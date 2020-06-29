#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int contaCaracteres( char arrayTokens[1000]);

int main(){
    
    char linha[1000];
    char palavra[25];
    int pos = 0;
    
    printf("Linha de entrada: ");
    gets (linha);
    printf("Palavra a ser buscada: ");
    gets(palavra);
    
    char *arrayTokens[100];
    char * token;
    token = strtok(linha, " ");
    char *palavraPtr = palavra;
    
    while(token != NULL){
        arrayTokens[pos] = token;
        pos += 1;
        token = strtok(NULL, " ");
    }
    
    pos -= 1;
    int tem = 0;
    int contador = 0;
    
    for(int i = 0; i <= pos; i++){
        
        int comparacao = strcmp(arrayTokens[i],palavraPtr);
       
        if(comparacao == 0){
            
            tem = 1;
            break;
          
        }
        
        contador += contaCaracteres(arrayTokens[i]);
        
       
    }
    
    if(tem){
        printf("Palavra %s está na posição: %d", palavra, contador+1);
    } else{
        printf("Não tem a palavra");
    }
    
    return 0;
}

int contaCaracteres( char arrayTokens[1000]){
    int posicao =0;

    int cont =0;
    
    while(arrayTokens[posicao] != NULL){
        printf("Tá entrando no while \n");
        posicao ++;
        cont++;
    }
    cont ++;
    return cont;
    
}
    
    






