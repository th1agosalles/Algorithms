
/*      Thiago Sales de Oliveira
Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma
comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um
algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor
que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float fixo,comissao,adicional,totalvenda,final;
    int carros;
    
    printf("Digite o numero de carros vendidos: ");
    scanf("%d",&carros);
    printf("\nDigite o valor total das vendas: ");
    scanf("%f",&totalvenda);
    printf("\nDigite o salário do vendedor: ");
    scanf("%f",&fixo);
    printf("\nDigite o valor da comissão por carro vendido: ");
    scanf("%f",&comissao);
    
    adicional=0.05*totalvenda;
    final=fixo+(comissao*carros)+adicional;
    
    printf("\n\nO salário final do vendedor é %.2f",final);
    
    return 0;
}
