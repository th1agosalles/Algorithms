#include <stdio.h>
#include <string.h>
#define TAM 3

typedef struct banda {
    char nome[40];
    char estilo [10];
    int integrantes;
    int rank;
}BANDA;

void leBanda(BANDA *v){
	int i;
    for(i=0;i<TAM;i++){
        printf("\nNome da banda: ");
        scanf("%s",v[i].nome);
        printf("Estilo da banda: ");
        scanf("%s",v[i].estilo);
        printf("Numero de integrantes: ");
        scanf("%d",&v[i].integrantes);
        printf("Rank da banda: ");
        scanf("%d",&v[i].rank);
    }
}

void exibeBanda(BANDA *exib){
	int i;
    for (i=0;i<TAM;i++){
        printf("\n\nNome da banda: %s",exib[i].nome);
        printf("\nEstilo da banda: %s",exib[i].estilo);
        printf("\nNumero de integrantes: %d",exib[i].integrantes);
        printf("\nRank da banda: %d\n\n",exib[i].rank);
    }
}

void pesquisaBanda(BANDA *search){
	int i, achou=0;
    char aux [10];
    printf("\n\nDigite o estilo: ");
    scanf("%s", aux);
    
    for (i=0;i<TAM;i++){
        if(strcmp(aux,search[i].estilo)==0){
        	achou=1;
            printf("\n%s",search[i].nome);
        } 
        
    }
    
    while(achou==0){
    	printf("\nBanda não encontrada. Digite outro estilo:");
    	scanf("%s", aux);
    
	    for (i=0;i<TAM;i++){
	        if(strcmp(aux,search[i].estilo)==0){
	        	achou=1;
	            printf("\n%s",search[i].nome);
	        } 
	        
	    }
    	
	}
	
}



int main(){
    BANDA v[TAM];
    leBanda(v);
    printf("\nlistagem de todas as bandas:\n");
    exibeBanda(v);
    pesquisaBanda(v);
    return 0;
}
