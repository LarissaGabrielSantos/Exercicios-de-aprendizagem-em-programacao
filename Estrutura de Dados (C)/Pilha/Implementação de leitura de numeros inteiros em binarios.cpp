#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct {
    int vet[TAM];
    int topo;
} pilhavet;


void empilha(int valor, pilhavet *p){
		if(p -> topo == TAM-1){
			printf("\nPilha Cheia");
			exit(0);
	}
	p -> topo++;
	p -> vet[p -> topo]=valor;
}

int desempilha(pilhavet *p){
		int aux;
		if(p -> topo==-1){
			printf("\nPilha Vazia");
			exit(1);
	}
	aux= p ->vet[p -> topo];
	p -> topo--;
	return aux;
}

int main(void) {
    int num, res;
    pilhavet pilha;
	pilha.topo=-1;
	
    printf("informe aqui um numero inteiro: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("em binario, o numero zero e: 0\n");
        return 0;
    } 
    
    while (num > 0) {
    	res=num%2;
        empilha(res, &pilha);
        num=num/2;
    }

    printf("em binario, o numero e: ");
    while (pilha.topo!=-1) {
        printf("%d", desempilha(&pilha));
    }
    printf("\n");
    
return 0;
}

