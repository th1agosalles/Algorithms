/*Em uma disciplina onde os alunos possuem duas notas, e precisamos registrar e calcular as
médias de todos eles, como seria um registro para representar esta situação? Implemente o
tipo de dado Aluno em C.*/

#include <stdio.h>
#define TAM 2

 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}
 float lerNota(){
     int Nota;
     scanf("%d",&Nota);
     while (Nota < 0 || Nota > 10){
         scanf("%d",&Nota);
     }
     return Nota;
}

int main() {
    
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[TAM];
    float salaMedia = 0;
    
    // Entrada de DADOS
        for(int i = 0;i<TAM;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       aluno[i].N1 = lerNota();
       aluno[i].N2 = lerNota();
       aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
       salaMedia += aluno[i].media;
       
        }
    // Processamento
    
        salaMedia = salaMedia/TAM;

    // Saída - Impressão do Boletim do Aluno
        for(int i = 0; i < TAM;i++){
        printf( "\nBOLETIM DO ALUNO %d \n",i);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
        if(aluno[i].media<salaMedia){
            printf("\nMenor que a media");
        }else{
            printf("\nMaior que a media");
        }
        }
    
       return (0);
}
