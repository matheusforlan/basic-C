#include <stdio.h>

int main()
{
    int num = 0;
    printf("Digite o inteiro: ");
    scanf("%d", &num);
    int condicao = 1;
    int divisor = 2;
    
    while(condicao == 1){
        
        if( (num%divisor) == 0){
            printf("O menor divisor é: %d", divisor);
            condicao = 0;
        }
        
        divisor += 1;
        
    }

    return 0;
}
