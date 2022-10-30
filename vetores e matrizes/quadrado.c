/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
das componentes deste vetor, armazenando o resultado em outro vetor. Os
conjuntos têm 10 elementos cada. Imprimir todos os conjuntos (vetores).*/

#include <stdio.h>
#include <locale.h>

int main()
{
    float V1[9],V2[9];
    int i;
    printf("Digite 10 valores para V1:\n");
    for(i=0;i<=9;i++){
        scanf("%f",&V1[i]);
    }
    for(i=0;i<=9;i++){
        V2[i]=V1[i]*V1[i];
    }
    printf("Valores:\n");
    for(i=0;i<=9;i++){
        printf("%f\n",V1[i]);
    }
    printf("\n\nValores ao quadrado:\n");
    for(i=0;i<=9;i++){
        printf("%.2f\n",V2[i]);
    }
    return 0;
}
