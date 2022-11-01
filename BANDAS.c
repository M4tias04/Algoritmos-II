#include <stdio.h>
#include <string.h>
#define TAM 3   

typedef struct banda {
    char nome[20];
    char estilo[20];
    int integrantes;
    int rank;
} BANDA;
void leBanda (BANDA *a) {
  for(int i=0;i<TAM;i++) {
    printf("\nNome da banda: ");   
    scanf("%s", a[i].nome);
    printf("Estilo musical: ");    
    scanf("%s", a[i].estilo);
    printf("Qt de integrantes: ");
    scanf("%d",&a[i].integrantes);
    printf("Posicao no ranking: ");
    scanf("%d",&a[i].rank);
  }
}
void exibeBanda (BANDA *exibe) {
    for( int i=0;i <TAM ; i++) {
        printf("\n\nBanda: %s",exibe[i].nome);
        printf("\nEstilo: %s",exibe[i].estilo);
        printf("\nIntegrantes: %d",exibe[i].integrantes);
        printf("\nRANK: %d",exibe[i].rank);
    }
}
int main() {
    BANDA a[TAM];    
    leBanda (a);
    printf ("\n\nLISTAGEM DE BANDAS");
    exibeBanda (a);
    return 0;
}
