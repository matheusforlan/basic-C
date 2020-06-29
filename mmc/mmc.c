#include <stdio.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    
    int mmc =1;
    int num1 = numero1;
    int num2 = numero2;
    
    while((num1 != 1) || (num2 != 1)){
        int divisorPrimo = 2;
        int dividiu = 0;
        
        
        while(dividiu == 0){
            
            if((num1 % divisorPrimo) == 0){
                num1 = num1 / divisorPrimo;
                dividiu = 1;
            }
            
            if((num2 % divisorPrimo) == 0){
                num2 = num2 / divisorPrimo;
                dividiu = 1;
            }
            
            divisorPrimo ++;
            
        }
        
        mmc = mmc*(divisorPrimo-1);
    }
    
    printf("O mmc de (%d, %d) é: %d",numero1,numero2, mmc);
    return 0;
}
