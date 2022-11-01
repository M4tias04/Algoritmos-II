#include <stdio.h>
#define TAM 3

typedef struct produto{
    char nome[10];
    float preco;
    int codigo;
}PRODUTO;

void cadastraProduto(PRODUTO *v){
    for(int i=0;i<TAM;i++){
        printf("\nNome do produto: "); scanf("%s",v[i].nome);
        printf("Preco: "); scanf("%f",&v[i].preco);
        printf("Codigo: "); scanf("%d",&v[i].codigo);
    }
}

void pesquisaProduto(PRODUTO *v){
    int aux,achou=0;
    printf("\nDigite o codigo do produto:");
    scanf("%d",&aux);
    
    for(int i=0;i<TAM;i++){
        if(aux==v[i].codigo){
            achou=1;
            printf("\n%s\n%.2f",v[i].nome,v[i].preco);
        }
    }
    if(achou==0){
            printf("\nProduto nao encontrado.");
        }
}

int main(){
    PRODUTO v[TAM];
    cadastraProduto(v);
    pesquisaProduto(v);
    return 0;
}