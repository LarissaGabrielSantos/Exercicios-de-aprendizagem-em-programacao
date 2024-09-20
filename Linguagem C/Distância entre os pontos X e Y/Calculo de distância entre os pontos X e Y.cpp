#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	int x1,x2,y1,y2, res;
	int a,b,c;
	
	printf("Digite as coordenadas x do ponto 1\n");
	scanf("%d", &x1);
	
	printf("Digite as coordenadas x do ponto 2\n");
	scanf("%d", &x2);
	
	printf("Digite as coordenadas y do ponto 1\n");
	scanf("%d", &y1);
	
	printf("Digite as coordenadas y do ponto 2\n");
	scanf("%d",&y2);
	
	a = x1 - x2;
	b = y1 - y2;
	c = a*a + b*b;
	res = sqrt(c);
	
	printf("A distancia dos pontos e: %d \n", res);
	system("pause");
} 