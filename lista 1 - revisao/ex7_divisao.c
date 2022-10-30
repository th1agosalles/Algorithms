/*Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor,
ou seja, para o segundo valor n�o pode ser aceito o valor zero e imprimir o resultado da divis�o do primeiro
valor lido pelo segundo valor lido.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float divisao,a,b;

	printf("Digite dois valores inteiros:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	
	if(b==0){
	    printf("\nO segundo número digitado não pode ser zero.\nPor favor digite outro valor.\n");
	    scanf("%f",&b);
	}
	
	divisao=a/b;
	
	printf("Divisão do 1º pelo 2º: %.2f",divisao);
	
	return 0;
	
}
	
	
	
