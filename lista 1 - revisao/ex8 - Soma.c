/*		Thiago Sales de Oliveira
Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo os valores
lidos na soma).*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b, soma, i;
	
	
	printf("Digite dois valores inteiros:\n");
	scanf("%d %d", &a,&b);
	
	soma=0;
	
	for(i=a; i<=b;i++ ){
		soma=soma+i;	
	}
	
	printf("\nSoma entre esses números: %d",soma);

	return 0;
}
