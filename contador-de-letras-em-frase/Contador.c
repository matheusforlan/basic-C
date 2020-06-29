#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    char linha[1000];
    printf("Linha de entrada: ");
    gets (linha);
    
    char alfabeto[27]= "abcdefghijklmnopqrstuvwxyz";
    
    
    for(int letra = 0; letra < 26; letra ++){
        int contador = 0;
        int posLinha = 0;
        while(linha[posLinha] != NULL){
            if(alfabeto[letra] == tolower(linha[posLinha])){
                contador ++;
            }
            posLinha ++;
        }
        
        printf("%c: %d, ", alfabeto[letra], contador);
    }
    return 0;
}
