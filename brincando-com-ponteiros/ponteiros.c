#include <stdio.h>

void imprimeArrayString(const char const *sPtr);
void imprimeArray(int *iPtr);

int main(){
    
    int  size = 10;
    int * iPtr = NULL;
    
    char * sPtr = NULL;
    
    char string[] = "Printando Strings com ponteiros";
    
    int numImpar[10] = {1,3,5,7,9,11,13,15,17,19};
    
    iPtr = &numImpar[3];
    
   
    printf("Conteúdo de iPtr: %d \n", *iPtr); // aponta para o primeiro elemento do Array //
    printf("Endereço de iPtr: %p \n", &iPtr);
    printf("Endereço de numImpar: %p \n", &numImpar[3]); // IGUAIS
    printf("Endereço apontado por iPtr: %p \n", iPtr); // ==
    printf("Endereço apontado por iPtr + 5: %p \n", iPtr+=5);
    printf("Conteudo de iptr[3] += 5: %d \n", *iPtr  );
    iPtr = &numImpar[9];
     printf("Endereço apontado por iPtr[9]: %p \n", iPtr);
      printf("Endereço apontado por iPtr[9] -= 3: %p \n", iPtr -= 3);
       printf("Conteúdo de iPtr[9] - 3: %d \n", *iPtr );
    
    
   
    imprimeArrayString(string);
    imprimeArray( numImpar);
    
    /*
    while (*iPtr != NULL){
        printf("%d ", *iPtr); // Ponteiro fazendo referência ao primeiro elemento do array
        ++iPtr;
    }
  
    
    for(int i = 0; i < 10; i ++){
        printf("%d ", numImpar[i]);  // Printando da forma normal.
    }
    */
    
}


void imprimeArray(int *iPtr){
    while (*iPtr <= 21){
        printf("%d ", *iPtr);
        ++iPtr;
    }
}

void imprimeArrayString(const char const *sPtr){
    
    for (; *sPtr != '\0'; ++sPtr){
        printf("%c", *sPtr);
    }
    
    printf("\n \n");
}

