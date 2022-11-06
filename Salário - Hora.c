/******************************************************************************
Thiago Sales de Oliveira
Primeira aula de AED II
Cálculo do salário mensal de um funcionário
*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
	int totalhoras;
	float salariohora,salariomensal;
	
	printf("Digite o salário hora do funcionário:\n");
	scanf("%f",&salariohora);
	printf("Digite o total de horas trabalhadas do funcionário:\n");
	scanf("%d",&totalhoras);
	salariomensal=totalhoras*salariohora;
	printf("\n\nO salário mensal é: %.2f", salariomensal);
	
	return 0;
	
}
