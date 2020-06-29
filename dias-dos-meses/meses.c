#include <stdio.h>

int main()
{
    int mes = 0;
    printf("Digite o mês: ");
    scanf("%d", &mes);
    
    int dias = 0;
    
    if(mes == 2){
        
         printf("Esse mês tem 28 dias ou 29 dias em anos bissextos");
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dias  = 30;
        printf("Esse mês tem %d dias",dias);
    }
    else{
        dias = 31;
         printf("Esse mês tem %d dias",dias);
    }
    

    
    return 0;
}
