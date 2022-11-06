/*		Thiago Sales de Oliveira
Faça um programa que calcule a soma dos N primeiros números primos, sendo N definido pelo usuário na função main. O
programa ainda deverá ter as funções somaPrimos e primo, sendo que a primeira será responsável pela soma dos números
que forem primos e a segunda será responsável por verificar se o número em questão é primo ou não.*/

#include <stdio.h>
#include <locale.h>

int primo(int x){
	int retorno=1,j;
	for(j=2;j<x;j++){
		if(x%j==0 && x!=j){
			retorno=0;
			break;
		}
	}
	return retorno;
}

int somaPrimo(int y){
	int soma;
	soma=soma+y;
	return soma;
}

int main(){
	setlocale(LC_ALL,"Portuguese");

	int n,i=0,num=2,soma=0;
	printf("Digite a quantidade de números primos:");
	scanf("%d",&n);

	printf("\n\nNúmeros primos: ");
	while(i<n){
		if(primo(num)==1){
			printf("%d ",num);
			soma+=somaPrimo(num);
			i++;
		}
		num++;
	}

	printf("\n\nSoma dos números primos = %d",soma);
	return 0;
}

