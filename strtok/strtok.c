#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char string[1000];
    char *arrayTokens[100];
    
    printf("Entrada: ");
    gets(string);
    
    char * token;
    
    int pos = 0;
    
    token = strtok(string, " ");
    
    while(token != NULL){
        
        arrayTokens[pos] = token;
        pos += 1;
        
        token = strtok(NULL, " ");
       
    }
    pos -= 1;
    for(; pos >= 0; pos--){
        printf("%s ",arrayTokens[pos]);
    }
   
    return 0;
}







