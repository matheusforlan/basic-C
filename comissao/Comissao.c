
#include <stdio.h>

int main()
{
    float vendas= 0;
    float salario =0;
    printf("Digite o valor de vendas em reais na semana: ");
    scanf("%f", &vendas);
    
    salario = 200 +(vendas*0.09);
    
    printf("O salário da semana é: %.2f$", salario);
    


    return 0;
}
