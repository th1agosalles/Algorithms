/*As ma��s custam R $1,30 cada se forem compradas menos de uma d�zia, e R $1,00 se forem compradas pelo
menos 12. Escreva um programa que leia o n�mero de ma��s compradas e escreva o custo total da compra.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float valormaca, total;
	int macas;
	
	printf("Digite o n�mero de ma��s:\n");
	scanf("%d",&macas);
	
	if(macas<12){
		valormaca=1.30;
	}
	else{
		valormaca=1.00;
	}
	
	total=valormaca*macas;
	
	printf("\n\nValor da compra: %.2f", total);
	
	return 0;
}
