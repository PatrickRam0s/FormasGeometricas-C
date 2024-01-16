/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int n, i, j, k;
    
    printf("Digite a altura: \n");
    scanf("%d", &n);
    printf ("\n");
    
    for (i = 0; i < n; i++){
         for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        
      for (j = 0; j <= i; j++){
        if (i == 0 || j == 0)
                k = 1;
        else
          k = k * (i - j + 1)/j ;
            
          printf("%d ", k);
  }
  
    printf("\n");
}
    return 0;
}



