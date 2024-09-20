#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct lista{
	int dado;
	struct lista *link;
}no;

no *crialista(int n){
	no *ini, *p, *ult;
	int valor;
	ini=ult=NULL;
	for(int i=1;i<=n;i++){
		printf("\nDigite o valor %d da lista ",i);
		scanf("%d",&valor);
		
		p=(no*)malloc(sizeof(no));
		p->dado=valor;
		p->link=NULL;
		if(ult!=NULL)
			ult->link=p;
		else
			ini=p;
		ult=p;
	}
	return ini;
}

void escrevelista(no *p){
	while(p!=NULL){
		printf("%d\t", p->dado);
		p=p->link;
	}
}

int main(void){
	no *primeira;
	int n;
	printf("Criando uma lista encadeada...");
	
	do{
		printf("\nEntre com o numero de nos: ");
		scanf("%d",&n);
		}while(n<0);
		
	primeira=crialista(n);
	if(primeira!=NULL){
		printf("\nLista Criada!");
		printf("\n");
		escrevelista(primeira);
	}
	else
		printf("\nLista Vazia!");
	
	return(0);
}