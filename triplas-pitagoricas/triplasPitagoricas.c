#include <stdio.h>
#include <math.h>
int main()
{
    for(int hipotenusa = 2; hipotenusa < 26; hipotenusa++){
        int lado1 = 1;
        int lado2 = 1;
       /* printf("Hipotenusa: %d \n",hipotenusa);
       */ 
        
        while(lado1 < hipotenusa){
           /* printf("lado1: %d \n", lado1);*/
            lado2 =1;
            
            while(lado2 < hipotenusa){
              /*  printf("lado2: %d \n", lado2); */
                
                if( ( pow(lado1,2) + pow(lado2, 2) )== pow(hipotenusa,2)){
                    printf("%d , %d , %d \n", lado1,lado2,hipotenusa);
                    
                }
                
                lado2 ++;
            }
            
            lado1++;
            
        }
        
        
        
    }

    return 0;
}
