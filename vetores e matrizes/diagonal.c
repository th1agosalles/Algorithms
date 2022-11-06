/*  Thiago Sales de Oliveira
Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tab[5][5],i,j;
     
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            tab[i][j]=0;
            if((i==0 && j==0) || (i==1 && j==1) || (i==2 && j==2) || (i==3 && j==3) || (i==4 && j==4) || (i==5 && j==5)) 
                {
                  tab[i][j]=1;      
            }
        }
    }
    
    printf("\n\nMatriz formada:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}
