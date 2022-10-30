/******************************************************************************
Struct - Exemplo M�dia aluno

*******************************************************************************/
#include <stdio.h>
#define TAM 2

float lenota(){
    int nota;
    scanf("%d",&nota);
    while (nota<0 || nota>10)
    {
        printf("Digite uma nota valida!!/n");
        scanf("%d",&nota);
    }
    return nota;
}
 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}


int main() {
    int i=0, soma=0; float mediaSala;
    
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[TAM];
    
    
    // Entrada de DADOS
    for(i=0;i<TAM;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matricula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       aluno[i].N1 = lenota();
       
       printf( "Nota N2: ");
       aluno[i].N2 = lenota();
       printf("\n\n");
    }   
    // Processamento
    
    for(i=0;i<TAM;i++){
        aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
        soma+=aluno[i].media;
    }
    mediaSala=soma/TAM;
    

    // Saída - Impressão do Boletim do Aluno
    
    for(i=0;i<TAM;i++){
        printf( "\nBOLETIM DO ALUNO %d\n",aluno[i].matricula);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
        if(aluno[i].media<mediaSala){
            printf(" (Abaixo da media)");
        }
        printf("\n\n");
    }
    printf("Media da sala: %.2f\n",mediaSala);
    printf("Quantidade de alunos: %d", TAM);
    
       
       return 0;
}




