/*      Thiago Sales de Oliveira
Escreva um algoritmo que imprima as seguintes seqüências de números: (1, 1 2 3 4 5 6 7 8 9 10) (2, 1 2 3 4 5 6
7 8 9 10) (3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, até que o primeiro número
(antes da vírgula), também chegue a 10.*/

#include<stdio.h>

int main()
{
    int i;
    
    for(i=1;i<=10;i++){
        printf("%d,1 2 3 4 5 6 7 8 9 10\n",i);
    }    
    
    return 0;
}
