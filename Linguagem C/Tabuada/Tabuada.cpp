#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num, res;
	
	do{
		printf("Digite o numero que sera feito na tabuada:\n");
		scanf("%d", &num);
	}
	while(num<=1 || num>=10);
	
	for(int i=1; i<=10; i++){
		res=num*i;
		printf("\n %d X %d = %d", num, i, res);
	}
	
printf("\n\n");
system("pause");
}