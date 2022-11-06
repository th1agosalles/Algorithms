/*    Thiago Sales de Oliveira
Implemente uma função chamada fatorial para calcular e retornar
o fatorial de um número maior ou igual a 0.*/

#include <stdio.h>
#include <locale.h>

int fatorial (int n) {
    int fat;
    if(n==0){
        fat=1;
    }
    else{
        fat=n*fatorial(n-1);
    }
    return fat;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    int n;
    printf("Digite o numero desejado: ");
    scanf("%d", &n);
    while(n<0){
        printf("Apenas maiores ou iguais a 0.\nDigite novamente: ");
        scanf("%d", &n);
    }
    
    printf("O fatorial de %d é %d", n,fatorial(n));
    
}
