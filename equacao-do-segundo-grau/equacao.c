#include <stdio.h>
#include <math.h>

int main()
{   
    int a =0;
    int b =0;
    int c =0;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: "); 
    scanf("%d", &c); 
    
    int delta = pow(b,2) - 4 * a * c;
    printf("%d \n", delta);
    
    if(delta > 0){
        int x1 = (- b + sqrt(delta))/ (2*a);
        int x2 = (- b - sqrt(delta))/ (2*a);
        printf("Tem duas raízes: %d e %d", x1,x2);
            
    } else if (delta == 0){
        int x = (-b)/(2*a);
        printf("Tem uma raiz: %d", x);
        
    } else{
        printf("Não tem raízes reais.");
    }
        
    return 0;
}

