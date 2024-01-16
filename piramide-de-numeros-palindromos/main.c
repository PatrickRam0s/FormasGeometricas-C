/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n, i, j, cleusa;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(cleusa = 1; cleusa <= i; cleusa++)
        printf("%d", cleusa);
        for(cleusa = i - 1;cleusa >=1; cleusa--)
        printf("%d", cleusa);
        printf("\n");
    }
    return 0;
}
