#include <stdio.h>

int main()
{
    
    int maior = 0;
    int menor = 0;
    
    printf("Digite o maior valor positivo: ");
    scanf("%d", &maior);
    printf("Digite o menor valor postivo: ");
    scanf("%d", &menor);
    
    if( menor == 0){
        printf("O MDC de (%d,%d) é %d",maior,menor,maior);
    }
    else{
        int resto = 1;
        int divisor = menor;
        int dividendo = maior;
        while (resto != 0){
            resto = dividendo % divisor;
            dividendo = divisor;
            divisor = resto;
        }
        
        printf("O MDC de (%d,%d) é %d",maior,menor,dividendo);
    }

    return 0;
}
