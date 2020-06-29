/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char num[6];
    printf("Digite um número inteiro de 5 dígitos: ");
    scanf("%s", num);
    
    printf("%c  %c  %c  %c  %c", num[0], num[1], num[2], num[3],num[4]);
    return 0;
}
