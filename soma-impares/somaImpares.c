#include <stdio.h>

int main(){   
    int num =0;
    int soma= 1;
    printf("Digite o número: ");
    scanf("%d", &num);
    
    int impar = 1;
    
    for (int c = 1; c < num ; c++){
        
        impar += 2;
        soma += impar;
        
    }
    
    printf("A soma dos ímpares é: %d", soma);
    return 0;
}
