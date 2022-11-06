/*      Thiago Sales de Oliveira
Faça uma função que retorne o resultado do somatório abaixo, sendo n o parâmetro de entrada da função.

∑(5 ∗ i^2 +2 ∗ i + 8)
n
i=1
*/

#include <stdio.h>

int somatorio(int n){
    int i,auxsoma;
    for (i=1;i<n;i++){
        auxsoma+=5*(i*i)+2*i+8;
    }
    return auxsoma;
}

int main()
{
    int soma,n;
    scanf("%d",&n);
    
    soma=somatorio(n);
    printf("%d",soma);
    return 0;
}
