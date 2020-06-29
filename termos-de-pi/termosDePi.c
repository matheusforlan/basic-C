#include <stdio.h>

int main()
{
    int termos =0;
    
    printf("Digite a quantidade de termos de Pi: ");
    scanf("%d", &termos);
    
    float divisor1 = 1;
    
    float divisor2 = 3;
    
    float n1 = 4/divisor1;
    float n2 = 4/divisor2;
    float serie =0;
    
    
    for (int i = 0; i < termos; i++){
        
        serie += (n1 - n2);
        
        divisor1 += 4;
        divisor2 += 4;
        
        n1 = 4/divisor1;
        n2 = 4/divisor2;
        
    }
    
    printf("O valor de Pi para %d termos é: %f",termos, serie);

    return 0;
}

