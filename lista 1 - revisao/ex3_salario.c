
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
