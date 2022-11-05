/*Thiago Sales de Oliveira
Aula 12/09/22 - Passagem de Parametros por Referencia*/

#include <stdio.h>
void soma (int a, int b, int *resultado) {
    *resultado=a +b;
}
void quadradocubo(int a, int b, 
     int *quadrado, int *cubo) {
    *quadrado=a*a;
    *cubo= b*b*b;
}
void troca (int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
    printf ("(Funcao) apos a troca a=%d e b=%d",*a,*b);
}

int main()
{
    int a, b, resultado, cubo,quadrado;
    
    printf("digite 2 numeros " );
    scanf ("%d", &a);
    scanf ("%d", &b);
    
    troca (&a,&b);
    
    printf ("\n(main) apos a troca a=%d e b=%d",a,b);
    
    soma (a,b,&resultado);
    printf("\n a soma = %d", resultado);
    quadradocubo (a,b,&quadrado,&cubo);

    printf ("\nQuadrado= %d cubo=%d",quadrado,cubo);
    return 0;

}
