/*Ler o sal�rio fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comiss�o de 3% sobre o total das vendas at� R $1.500,00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu sal�rio total.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float fixo,vendas, comissao, total;
    
    printf("Digite o salário do vendedor: ");
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
    
    printf("O salário total do vendedor é %.2f",total);
    
    return 0;
}
    
