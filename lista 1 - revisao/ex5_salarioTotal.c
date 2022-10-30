/*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comissão de 3% sobre o total das vendas até R $1.500,00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu salário total.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float fixo,vendas, comissao, total;
    
    printf("Digite o salÃ¡rio do vendedor: ");
    scanf("%f",&fixo);
    printf("\nDigite o valor total das vendas: ");
    scanf("%f",&vendas);
    
    if(vendas<=1500){
        comissao=0.03*vendas;
    }
    else{
        comissao=0.05*vendas;
    }
    
    total=fixo+comissao;
    
    printf("O salÃ¡rio total do vendedor Ã© %.2f",total);
    
    return 0;
}
    
