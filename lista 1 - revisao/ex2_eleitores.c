
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int total, branco, nulo, valido;
    float percentualb, percentualn,percentualv;
    
    printf("Digite o número total de eleitores: ");
    scanf("%d",&total);
    printf("\nDigite o número de votos brancos: ");
    scanf("%d",&branco);
    printf("\nDigite o número de votos nulos: ");
    scanf("%d",&nulo);
    printf("\nDigite o número de votos validos: ");
    scanf("%d",&valido);
    
    printf("\n\nbranco %d\n",branco);
    printf("nulo %d\n",nulo);
    printf("valido %d\n",valido);
    
    percentualb = (branco/total)*100;
    percentualn = (nulo/total)*100;
    percentualv = (valido/total)*100;
    
    printf("\n\nPercentual de votos brancos: %.2f%%",percentualb);
    printf("\nPercentual de votos nulos: %.2f%%",percentualn);
    printf("\nPercentual de votos válidos: %.2f%%",percentualv);
    
    
    
    
    return 0;
}
