#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int cpf, idade;
	float renda;
	char nome[40];
}cadastrar;

int main (void){
	cadastrar cliente[5];
	
	for(int i=0; i<5; i++){
		printf("\nInforme o CPF do %d cliente (sem utilizar pontos e tracos): ",i+1);
		scanf("%d",&cliente[i].cpf);
		
		printf("Informe a idade do %d cliente: ",i+1);
		scanf("%d", &cliente[i].idade);
		
		printf("Informe a renda do %d cliente: ",i+1);
		scanf("%f", &cliente[i].renda);
		
		getchar();
		
		printf("Informe o nome do %d cliente: ",i+1);
		fgets(cliente[i].nome, sizeof(cliente[i].nome),stdin);
		
		for(int i=0;i<5;i++){
			if(cliente[i].renda>5000.00){
				puts(cliente[i].nome);
			}
		}
		
		
	}

}