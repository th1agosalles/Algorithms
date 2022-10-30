/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<locale.h>

int leIdade();
int abs(int x);

int main()
{
    int id1=leIdade(),id2=leIdade();
    printf("\nDiferença:%d",abs(id1-id2));
    return 0;
}

int abs(int x)
    {
        if(x<0){
            x=x*(-1);
        }
        return x;
    }

int leIdade(){
    int i;
    printf("Digite a idade de 0 a 110: ");
    scanf("%d",&i);
    while(i<0 || i>110){
        printf("\nDigite novamente.\n");
        scanf("%d",&i);
    }
    return i;
}


