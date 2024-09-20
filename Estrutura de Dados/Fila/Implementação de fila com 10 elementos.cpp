#include<stdio.h>
#include<stdlib.h>

#define TAM 5

typedef struct{
	int r,f;
	int vet[TAM];
}filavet;

void enfileirar(int valor, filavet *p){
	if(p->r == TAM-1){
		printf("\nFila Cheia!");
		exit(0);
	}
	p->r++;
	p->vet[p->r] = valor;
}

int desenfileirar(filavet *p){
	int aux;
	if(p->f == TAM){
		printf("\nFila Vazia!");
		exit(1);
	}
	
	aux=p->vet[p->f];
	p->f++;
	return aux;
}

int main(void){
	filavet fila;
	int valor;
	fila.r = -1;
	fila.f = 0;
	
	for(int i=0;i<TAM;i++){
		printf("Digite o valor a ser enfileirado:\n");
		scanf("%d",&valor);
		enfileirar(valor,&fila);
	}
	
	for(int i=0;i<TAM;i++){
		printf("\n%d", desenfileirar(&fila));
	}
	
	
	return(0);
}