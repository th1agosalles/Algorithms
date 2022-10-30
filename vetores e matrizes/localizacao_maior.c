/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor.*/

#include <stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tab[4][4],i,j, linha, coluna, maior;
    
    maior=tab[0][0];
    coluna=1; linha=1;

    printf("Digite os valores da matriz 4x4:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&tab[i][j]);
            if(tab[i][j]>maior){
                linha=i+1;
                coluna=j+1;
            }
        }
    }
    printf("\n\nMatriz formada:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n\nPosiÃ§Ã£o do maior valor: Linha %d,Coluna %d.",linha,coluna);
    return 0;
}
