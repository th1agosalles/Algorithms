/*Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a quantidade de
vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.*/

#include<stdio.h>

int main()
{
    int v1[14],v2[14], vezes=0, i;
    
    for (i=0;i<=14;i++){
        scanf("%d",&v1[i]);
    }   
    for (i=0;i<=14;i++){
        scanf("%d",&v2[i]);
        if(v1[i]==v2[i]){
          vezes++;  
        }   
    } 
    
    printf("Quantidade de vezes:%d",vezes);  
    
    return 0;
}
