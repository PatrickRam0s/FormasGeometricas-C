/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 
int main()
{
        int i, j, n, tipo;
        
        printf ("Digite o valor de n: \n");
        scanf ("%d", &n);
        printf ("Escolha o tipo de triângulo: \n 1-Preenchido \n 2-Vazado \n");
        scanf ("%d", &tipo);
        
    if (tipo == 1){
        for (i = 1; i <= n; i++){
         for (j = 1; j <= i; j++)
        printf ("*");
        printf ("\n");
        }
            
    
    }
 
    if (tipo == 2){
      for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            if (i == n || j == 1 || j == i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");}
        
    }
    else {
        printf ("Inválido");
    }
    return 0;
}
