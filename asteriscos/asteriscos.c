#include <stdio.h>

int main()
{   
    int asteriscos = 0;
    
    printf("Digite a quantidade de asteriscos: ");
    scanf("%d", &asteriscos);
    
    if(asteriscos == 1){
        printf("  *  ");
    } 
    
    else{
        char stringAsteriscos[20];
        char stringEspacos[20];
        
       
        int diminuidor = 1;
        for(int i = 1; i <= asteriscos*2; i++){
            
            if(i<= (asteriscos)){
                
                for(int e = 0; e < (20 - i); e++){
                    stringEspacos[e] = ' ';
                }
                
                
                for(int s = 0; s <(20 - i); s++){
                    printf("%c",stringEspacos[s]);
                }
                
                   /**************/
                for(int j = 0; j < i; j++){
                    stringAsteriscos[j] = '*';
                }
                
                for(int k = 0; k < i; k++){
                    printf("%c ", stringAsteriscos[k]);
                }
                
                printf("          \n");
                
                
            } else{
                
                for(int e = 0; e < (20 - i + diminuidor); e++){
                    stringEspacos[e] = ' ';
                }
                
                
                
                for(int s = 0; s <(20 - i + diminuidor); s++){
                    printf("%c",stringEspacos[s]);
                }
                
                    /*******************/
                for(int j = 0; j < (i-diminuidor); j++){
                    stringAsteriscos[j] = '*';
                }
                
                for(int k = 0; k < (i- diminuidor); k++){
                    printf("%c ",stringAsteriscos[k]);
                }
                
                printf("           \n");
                diminuidor += 2;
                
            }
        }
    }
    

    return 0;
}









