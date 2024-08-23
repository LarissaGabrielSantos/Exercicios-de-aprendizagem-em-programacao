#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int mat;
	char nome[40];
	float nota;
}aluno;

int main(void){
	aluno ed[4];
	aluno java[3];
	
	printf("\nTurma de Estrutura de Dados:");
	
	for(int i=0;i<4;i++){
		printf("\nDigite a matricula do %d aluno: ", i+1);
		scanf("%d",&ed[i].mat);
		
		printf("\nDigite a nota do %d aluno: ",i+1);
		scanf("%f",&ed[i].nota);
		
		getchar();
		
		printf("\nDigite a nome do %d aluno: ", i+1);
		fgets(ed[i].nome,sizeof(ed[i].nome),stdin);
	}
	
	printf("\nTurma de Java:");
	
	for(int i=0; i<3;i++){
		printf("\nDigite a matricula do %d aluno: ", i+1);
		scanf("%d", &java[i].mat);
		
		printf("\nDigite a nota do %d aluno: ",i+1);
		scanf("%f", &java[i].nota);
		
		getchar();
		
		printf("\nDigite a nome do %d aluno: ",i+1);
		fgets(java[i].nome,sizeof(java[i].nome),stdin);
	}
	
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(ed[i].mat==java[j].mat){
				puts(ed[i].nome);
			}
		}
	}
return 0;
}