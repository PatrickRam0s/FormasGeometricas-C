/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main()
{
    int i, j, n, z, y;
    
    printf("Digite o valor de n: ");
    scanf ("%d", &n);
    
    for (i = 1; i <= n; i++){
        for (j = n - i; j >= 1; j--)
        printf (" ");
        for (j = 1; j <= i; j++)
        printf ("x ");
        printf ("\n");}
        
     
    for (z = 1; z <= n; z++){
        for (y = 1; y <= z; y++)
        printf (" ");
        for (y = n - z; y >= 1; y--)
        printf ("x ");
        printf ("\n");}
        
 

    return 0;
}