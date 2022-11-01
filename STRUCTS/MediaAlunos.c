
#include <stdio.h>
#define TAM 10


 float media( float N1, float N2)
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
    int i;
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[TAM];
    float salaMedia = 0;
    
        	for(i = 1;i<TAM;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO %d|||||||||||||||||||  \n\n",i);
       printf( "Matrícula do aluno: ");
       aluno[i].N1 = lerNota();
       aluno[i].N2 = lerNota();
       aluno[i].media = media(aluno[i].N1,aluno[i].N2);
       salaMedia += aluno[i].media;
       
        }

    
        salaMedia = salaMedia/TAM;

  
        for(i = 1; i < TAM;i++){
        printf( "\nBOLETIM DO ALUNO %d \n",i);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
        if(aluno[i].media<salaMedia){
            printf("\nAbaixo da media");
        }else{
            printf("\nAcima da media");
        }
        }
    
       return (0);
}

