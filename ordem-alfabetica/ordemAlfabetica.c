#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char linha[1000];
    printf("Linha de entrada: ");   
    gets (linha);
    
    int pos =0;
    char * token;
    token = strtok(linha, " "); // é um ponteiro que recebe o resultado do strtok
    char *arrayTokens[1000];    // 
    
    
     while(token != NULL){         // o loop é só para guardar no array em cada posição
         
        arrayTokens[pos] = token; // isso aí eu guardo num array 
        pos += 1;
        token = strtok(NULL, " ");     // Isso é para passar para o próximo elemento, se não ele volta para o primeiro foi o que 
                                        // entendi quando pesquisei sobre a função
                                       // às vezes imprime só os dois primeiros
    }
    pos --; // diminuo uma posição da última
    
    
    for(int i = 0; i < pos; i++){
        
        for(int j = 0; j < pos; j++){
            
            int comparacao = strcmp(arrayTokens[j], arrayTokens[j+1]); // a função retorna maior que 0 se a letra vier se n1 > n2
                                                                            // 0 se forem iguais e -1 se n1 < n2
            if(comparacao > 0){
                char *aux = arrayTokens[j]; // aqui que eu acho que é o erro, na hora de criar a auxiliar isso
                arrayTokens[j] = arrayTokens[j+1];
                arrayTokens[j+1] = aux;
                
            }
            
        }
        
        
    }
    int k =0;
    
    while(arrayTokens[k] != NULL){   // varre  o rray até chegar em NULL isso
        
        printf("%s ", arrayTokens[k]);
        k++;
    }

    return 0;
}

