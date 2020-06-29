#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

maiusculaMinuscula(char s[100]);

int main(){
    
    char s[100];
    printf("Digite um texto de até 100 linhas: ");
    gets(s);
    
    maiusculaMinuscula(s);
    
    printf("O texto trocando uma maiúscula com uma minúscula é: %s", s);

    return 0;
}

maiusculaMinuscula(char s[100]){
    
    int i = 0;
    
    while(s[i] != '\0'){
        
        if(i%2 == 0){
            s[i] = toupper(s[i]);
        } else{
            s[i] = tolower(s[i]);
        }
        
        i++;
        
    }
    
    
    
}