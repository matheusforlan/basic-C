#include <stdio.h>

void calculaProdutoMatrizes(int m1[100][100] , int m2[100][100] , int mres3[100][100], 
int l1, int c1, int l2, int c2);

void somaMatrizes(int m1[100][100], int m2[100][100], int mres4[100][100],
int l1, int c1, int l2, int c2); 

void imprimeMatriz(int m[100][100], int linhas, int colunas);

int linhaPorColuna( int m1[100][100] , int m2[100][100], int l1, int i, int j);


int main(){
    int  m1[100][100]  = { {1,3},
                           {4,1} };
    
    int  m2[100][100]  = { {2,3} ,
                           {5,1}  };
    
    int mres3[100][100]  = {0};
    
    int mres4[100][100] = {0};
    
    int  m3[100][100]  = { {1,2,3},
                           {4,5,6},
                            7,8,9};
    
    int  m4[100][100]  = { {1,0,0} ,
                           {0,1,0},
                           {0,0,1}};
                         
    int mres5[100][100] = {0};
    
    
    
    int  m5[100][100]  = { {7,2,9} ,
                           {1,1,13} ,
                           {4,5,1 }};
    
    
    
    somaMatrizes(m1,m2, mres4, 2,2,2,2);
    calculaProdutoMatrizes(m1, m2, mres3, 2,2,2,2);
    
    imprimeMatriz(mres4,2,2);
    printf("-------------------");
    
    imprimeMatriz(m5, 3 ,3);
    printf("Resultado do Produto");
    
    imprimeMatriz(mres3,2,2);
    
    calculaProdutoMatrizes(m3, m4, mres5, 3,3,3,3);
    
printf("Resultado do Produto 2: ");
    
    imprimeMatriz(mres5, 3 ,3);
    

    return 0;
    
    
}

void calculaProdutoMatrizes(int m1[100][100] , int m2[100][100] , int mres3[100][100], 
int l1, int c1, int l2, int c2){
    
    if(l1 != l2 || c1 != c2){
        printf("Dimensões incopatíveis para a soma");
        return;
    }
    
    for(int i = 0; i < l1; i++){
        
        for(int j = 0; j < c1; j++){
            mres3[i][j] = linhaPorColuna(m1,m2,l1, i, j);
        }
        
    }
 }
 
void somaMatrizes(int m1[100][100], int m2[100][100], int mres4[100][100],
int l1, int c1, int l2, int c2){
    
    if(l1 != l2 || c1 != c2){
        printf("Dimensões incopatíveis para a soma");
        return;
    }
    
    for(int i = 0; i < l1; i++){
        
        for(int j = 0; j < c1; j++){
            
            mres4[i][j] = m1[i][j] + m2[i][j];
        }
    }
    
    return;
}

void imprimeMatriz(int m[100][100], int linhas, int colunas){
    
    printf("\n Matriz: \n");
    
    for(int i = 0; i < linhas; i++){
        
        for(int j = 0; j < colunas; j ++){
            
            printf(" %d ", m[i][j]);
            
        }
        
        printf("\n");
    }
    
}

int linhaPorColuna( int m1[100][100] , int m2[100][100], int l1, int i, int j){
    
    int valor = 0;
    
    for(int numero = 0; numero < l1; numero++){
        
        valor += (m1[i][numero] * m2[numero][j]);
    }
    
    return valor;
}
    

   

    
    
    
    
    


