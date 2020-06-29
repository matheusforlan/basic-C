#include <stdio.h>

int funcaoFatorialImpar(int num);

int main()
{   
    int num = 0;
    printf("Digite o fatorial ímpar: ");
    scanf("%d", &num);
    
    int fatorialImpar = funcaoFatorialImpar(num);
    
    printf("O fatorial ímpar de %d, é: %d", num, fatorialImpar);
    

    return 0;
}

int funcaoFatorialImpar(int num){
    
    int valor = 1;
    for (int n = 1; n <= num; n+= 2){
        
        valor *= n;
    }
    
    return valor;
}

