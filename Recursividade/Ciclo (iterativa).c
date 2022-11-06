/*    Thiago Sales de Oliveira
Implemente a função ciclo que recebe dois parametros: o valor inicial (n) e o valor final - limite(ambos do tipo int).
A função deve apresentar na tela os valores a partir de n até limite, um em cada linha.*/

#include <stdio.h>

void ciclo (int n, int limite) {
   for (int i=n; i<= limite; i++) {
        printf("%d\n" , i);
   }
}

int main()
{
    ciclo(2,10);

    return 0;
}
