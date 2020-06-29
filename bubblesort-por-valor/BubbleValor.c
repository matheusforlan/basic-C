#include <stdio.h>
#include <time.h>
void bubbleSort(int array[15]);

void imprimeArray(int array[15]);
int main(){
    clock_t tempo;
	tempo = clock();
    
    int array[15] = {14,3,9,4,7,1,6,4,8,2,10,5,11,13,12};
    imprimeArray(array);
    
    bubbleSort(array);
    
    imprimeArray(array);
    
   
    printf("\n Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);
    return 0;
}

void bubbleSort(int array[15]){
    
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

void imprimeArray(int array[15]){
    
    for(int i =0; i < 15; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    
}
