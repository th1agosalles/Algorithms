//Ex1 - Maior entre 3 numeros//
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int posicao, maior, x, y,z;
    
    scanf("%d",&x);
    maior=x;
    posicao=1;
    scanf("%d",&y);
    if(y>maior){
        maior = y;
        posicao=2;
    }
    scanf("%d",&z);
    if(z>maior){
        maior = z;
        posicao=3;
    }
    printf("\nPosição %d",posicao);
    return 0;
}
