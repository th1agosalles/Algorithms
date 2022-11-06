/*      Thiago Sales de Oliveira
Ex1 - Maior entre 3 numeros
Implemente um programa que leia 3 números inteiros e informe em qual posição se encontra o maior dentre
eles. Exemplo: se os números lidos forem 10, 30, 14 a saída deve ser: posição 2.*/

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
