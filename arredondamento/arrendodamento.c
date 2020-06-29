
#include <stdio.h>

int main()
{
    float num = 0;
    printf("Digite o valor: ");
    scanf("%f", &num);
    
    int inteiro;
    inteiro = (int)num;
    
    if(num - inteiro >= 0.5){
        printf("%d", inteiro +1);
    } 
    else if(num - inteiro == 0){
        printf("%d", inteiro);
    }
    else {
        printf("%d", inteiro -1);
    }

    return 0;
}
