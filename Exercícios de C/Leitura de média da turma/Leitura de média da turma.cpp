#include<stdio.h>

int main(void){
    float nota, soma, media;
    int qtdalunos;
    
    soma=0;
    
    printf("Digite a quantidade de alunos da turma\n");
    scanf("%d", &qtdalunos);
    
    for(int i=1; i<=qtdalunos; i++){
        printf("Digite a nota do %d aluno\n", i);
        scanf("%f", &nota);
        
        soma = soma + nota;
    }
    media = soma / qtdalunos;
    
    if(media>=7){
        printf("A turma esta em nivel bom com media %.2f", media);
    }
    else if(media>=5){
        printf("A turma esta em nível regular com media %.2f", media);
    }
    else{
        printf("A turma esta em nível de atenção com media %.2f", media);
    }
    
return 0;
}