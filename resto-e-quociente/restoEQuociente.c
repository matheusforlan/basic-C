#include <stdio.h>

int main()
{
    int dividendo =0;
    int divisor =0;
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    
    int quociente = 0;
    int resto = 0;
    quociente = dividendo/divisor;
    
    resto = ( dividendo - (quociente*divisor) );
    
    printf("O quociente é: %d", quociente);
    printf("\nE o resto é: %d", resto);
    

    return 0;
}
