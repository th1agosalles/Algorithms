/*      Thiago Sales de Oliveira
Crie uma função que determine se dado caracter está entre ‘a’ e ‘z’. Dica: Use a tabela ASCII.*/  

#include <stdio.h>

int intervalo(char n){
    int retorno=0;
    if(n>='a' && n<='z'){
        retorno=1;
    }
    return retorno;
}

int main()
{
    char n; int resultado;
    scanf ("%c",&n);
    resultado=intervalo(n);
    printf("%d",resultado);

    return 0;
}
