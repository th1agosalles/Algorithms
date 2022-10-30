/*Um sistema banc�rio manipula dois dados principais: cliente e conta. Implemente esses dois
tipos de dados em C.

Nomes dos Registros: Cliente e Conta.

Campos: O nome do cliente � uma informa��o relevante. O CPF poder� ser utilizado para
diferenciar clientes com o mesmo nome. Como identificar a conta do cliente? Cada conta
poderia ter um n�mero de conta �nico, que serviria para identificar a conta do cliente.
Cada conta ter� um saldo, que ser� gerenciada pelo sistema. Como cada cliente pode possuir
mais de uma conta banc�ria, junto com a conta deveremos registrar qual cliente � o dono dela.
Vamos utilizar o CPF do cliente na conta para identificar o seu dono.*/

#include <stdio.h>

typedef struct cliente{
    char nome[50];
    char cpf[15];
}CLIENTE;

typedef struct conta{
    int numConta;
    float saldo;
    CLIENTE dados;
}CONTA;

void imprimeCliente(CLIENTE c){
    printf("\nNome: %s\n",c.nome);
    printf("\nCPF: %s\n",c.cpf);
}

void imprimeConta(CONTA x){
    printf("\nNumero da conta: %d", x.numConta);
    printf("\nSaldo: %.2f", x.saldo);
    printf("\nNome: %s", x.dados.nome);
    printf("\ncpf: %s", x.dados.cpf);
}

int main(){
    CLIENTE c;
    CONTA c1;
    printf("Nome: "); scanf("%s",c.nome);
    printf("CPF: "); scanf("%s",c.cpf);
    printf("Numero da conta: "); scanf("%d",&c1.numConta);
    printf("Saldo: "); scanf("%f",&c1.saldo);
    imprimeConta(c1);
    
    return 0;
    
}
