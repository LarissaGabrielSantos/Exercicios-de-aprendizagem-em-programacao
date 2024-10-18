#include <stdio.h>
#include<stdlib.h>

#define TAM 10

void imprimirVet(int vet[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

int obterMaximo(int vet[], int n) {
    int maximo = vet[0];
    for (int i = 1; i < n; i++)
        if (vet[i] > maximo)
            maximo = vet[i];
    return maximo;
}

void ordenacaoContagemSimples(int vet[], int n, int exp) {
    int saida[n];
    int i, contagem[TAM] = {0};

    for (i = 0; i < n; i++)
        contagem[(vet[i] / exp) % 10]++;

    for (i = 1; i < TAM; i++)
        contagem[i] += contagem[i - 1];

    for (i = n - 1; i >= 0; i--) {
        saida[contagem[(vet[i] / exp) % 10] - 1] = vet[i];
        contagem[(vet[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        vet[i] = saida[i];
}

void radixSortSimples(int vet[], int n) {
    int maximo = obterMaximo(vet, n);

    for (int exp = 1; maximo / exp > 0; exp *= 10)
        ordenacaoContagemSimples(vet, n, exp);
}

int main() {
    int n;
    
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int vet[n];

    printf("Digite os elementos do vet:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    radixSortSimples(vet, n);
    printf("Vet ordenado:\n");
    imprimirVet(vet, n);
    
    return 0;
}



