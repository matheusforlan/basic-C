#include <stdio.h>

void kesimonum(int numero, int digito);

int TamanhoNumero(char string[]);

int main()
{
   int numero =0;
   int digito = 0;
   
    printf("Digite o número: ");
    scanf("%d", &numero);
    printf("Digite o dígito que você quer: ");
    scanf("%d", &digito);
    
    kesimonum(numero, digito);
   

    return 0;
}

void kesimonum(int numero, int digito){
    
    char numeroString[1000000];
    sprintf(numeroString, "%d", numero);
    
    int tamanho = TamanhoNumero(numeroString);
    
    int posicao = tamanho - digito;
    
    
    printf("O dígito é: %c", numeroString[ posicao]);
     
}

int TamanhoNumero(char numeroString[]){
    int numDigitos = 0;
    
    while(numeroString[numDigitos] != '\0') {
        numDigitos++;
    }
    
    return numDigitos;
}
