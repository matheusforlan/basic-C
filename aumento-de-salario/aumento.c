#include <stdio.h>

int main(){
    
    float salario =0;
    printf("Digite o seu salário atual: ");
    scanf("%f", &salario);
    float salarioNovo =0;
    
    
    if(salario <= 2000){
        salarioNovo = salario + (salario*0.13);
    } else if(salario <= 4000){
        salarioNovo = salario + (salario*0.11);
    } else if(salario <= 8000){
        salarioNovo = salario + (salario*0.09);
    } else{
        salarioNovo = salario +(salario*0.07);
    }
    
    printf("O seu novo salário após o aumento é: %.2f$", salarioNovo);
    

    return 0;
}
