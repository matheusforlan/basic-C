#include <stdio.h>
#include <time.h>
void bubbleSort(int * array);

void imprimeArray(int *iPtr);
int main(){
    clock_t tempo;
	tempo = clock();
	int * iPtr = NULL;
    
    int array[15] = {14,3,9,4,7,1,6,4,8,2,10,5,11,13,12};
    
    int ordenado = 1;
    
    while(ordenado){
        
        ordenado = 0;
        
        iPtr = array;
        
        for(; iPtr < array + 14; ++iPtr){  // Desse modo, percorrerá todo o array, passeando por ele usando
            if(*iPtr > *(iPtr + 1)){     // a soma que possibilita vc ir para o próximo endereço de memória
                int aux = *iPtr;      //e assim comparar o elemento com o próximo, usando o * que permite 
                *iPtr = *(iPtr + 1);  //vc visualizar o  conteúdo do endereço de memória.
                *(iPtr+1) = aux;
                ordenado = 1;
            }
        }
        
    }
    
    
    imprimeArray(array);
   /* 
    bubbleSort(array);
    
    imprimeArray(array);
    
   */
    printf("\n Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
    return 0;
}

void bubbleSort(int *array){
    
    for(int i = 0; i < 14; i++){
        
        for(int j = 0; j <14; j++){
            
            if(array[j] > array[j+1]){
                int aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
                
            }
            
        }
        
        
    }
    
   
    
}

void imprimeArray(int *iPtr){
    
    for(; *iPtr != NULL; iPtr++){
        printf("%d ", *iPtr);
    }
    printf("\n");
    
}


