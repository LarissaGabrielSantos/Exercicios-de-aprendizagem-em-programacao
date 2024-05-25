#//Fazer uma calculadora onde se calcula o tempo de série que você assistiu
#include <stdio.h>

int main(){
	int min, temporadas, ep, horas, duracao;
	char nome[200];
	
	printf("--------------------------------------------------\n");
	printf("Bem-vindo(a) a calculadora de tempo de serie: \n");
	printf("--------------------------------------------------\n");
	
	printf("Informe qual a serie que voce esta assistindo no momento: \n");
	gets(nome);
	
	printf("Quantas temporadas ela possui?: \n");
	scanf("%d", &temporadas);
	
	printf("Qual a media de episodios que a serie %s possui?: \n", nome);
	scanf("%d", &ep);
	
	printf("Qual a media de tempo (em minutos) por episodio?: \n");
	scanf("%d", &min);
	
	duracao = (ep * temporadas) * min;
	horas = duracao / 60;
	
	printf("Voce assistiu %d horas de %s\n", horas, nome);
	
	printf("Pressione qualquer tecla para sair...");
    getchar();
	
		return 0;
}