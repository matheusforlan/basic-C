#include <stdio.h>
#include <math.h>

int
main ()
{

    int a = 0;
    int b = 0;
    int c = 0;
    printf ("Digite o valor de a: ");
    scanf ("%d", &a);
    printf ("Digite o valor de b: ");
    scanf ("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    
    if( (a+b) > c && (b+c)>a && (a+c)>b){
        if(a == b && a == c){
            printf("Triângulo equilátero");
        } else if ( (a != b) && (a != c) && (b != c)){
            printf("Triângulo escaleno");
        } else{
            printf("Triângulo isóceles");
        }
        
        if(pow(a,2) == pow(b,2) + pow(c,2)){
            
            printf("\nTriângulo também é retângulo");
        }
        
    } 
    else{
        printf("Triângulo não existe");
    }
    

  return 0;
}
