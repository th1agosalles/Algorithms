/*Fa�a um programa que calcule a soma dos N primeiros n�meros primos, sendo N definido pelo usu�rio na fun��o main. O
programa ainda dever� ter as fun��es somaPrimos e primo, sendo que a primeira ser� respons�vel pela soma dos n�meros
que forem primos e a segunda ser� respons�vel por verificar se o n�mero em quest�o � primo ou n�o.*/

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
	printf("Digite a quantidade de n�meros primos:");
	scanf("%d",&n);

	printf("\n\nN�meros primos: ");
	while(i<n){
		if(primo(num)==1){
			printf("%d ",num);
			soma+=somaPrimo(num);
			i++;
		}
		num++;
	}

	printf("\n\nSoma dos n�meros primos = %d",soma);
	return 0;
}

