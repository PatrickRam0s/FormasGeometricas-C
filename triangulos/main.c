/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int x, y, z;
  printf ("Qual o valor de x? \n");
  scanf ("%d", &x);
  
  printf ("Qual o valor de y? \n");
  scanf ("%d", &y);

  printf ("Qual o valor de z? \n");
  scanf ("%d", &z);
  
  if (x > y + z || y > x + z || z > x + y || x > y + z || y > x + z || z > x + y) {
      printf ("Erro: não é possível formar um triângulo.");
  }
  else if (x == y && y == z) {
      printf ("O triângulo possui lados iguais, portanto ele é equilátero.");
  }
  else if (x == y && y != z || y == z && z != x) {
      printf ("O triângulo possui dois lados iguais e um diferente, portanto ele é isóscele.");
  }
  else if (x != y != z && z != x) {
      printf (" triângulo possui todos os lados diferentes, portanto ele é escaleno.");
  
  }
    return 0;
}
