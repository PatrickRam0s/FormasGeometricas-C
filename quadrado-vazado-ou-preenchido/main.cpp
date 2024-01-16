#include <stdio.h>

int main()
{
    int n, tipo, i, j;
    printf("Digite o valor de n:\n");
    scanf ("%d", &n);
    printf ("Escolha o tipo: \n 1-Preenchido \n 2-Vazado\n");
    scanf ("%d", &tipo);
    printf ("\n");
    
 if (tipo == 1){
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++)
        printf ("*");
        printf("\n");
    }

 }
    
 if (tipo == 2){
     
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");}
        
    
   }
}
