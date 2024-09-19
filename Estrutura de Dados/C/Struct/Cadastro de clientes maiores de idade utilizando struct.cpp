#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int id, idade, maior_idade;
	float renda;
	char nome[40];
}cadastro;

int main(void){
	
	cadastro clientes[5];

	for(int i=0;i<4;i++){
		printf("*************************************************");
		printf("\nInforme o ID do %d cliente: ",i+1);
		scanf("%d", &clientes[i].id);
		
		printf("\nInforme a idade do %d cliente: ",i+1);
		scanf("%d", &clientes[i].idade);
		
		getchar();
		
		printf("\nInforme o nome do %d cliente: ", i+1);
		gets(clientes[i].nome);
		
		printf("\nInforme a renda do %d cliente: ", i+1);
		scanf("%f", &clientes[i].renda);
		printf("\n*************************************************\n");	
	}
	for(int i=0;i<4;i++){
		if(clientes[i].idade>=18){
			puts(clientes[i].nome);
		}
	}
	
	return(0);
}