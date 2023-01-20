#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *vet;
    printf("Escreva o tamanho do seu vetor: ");
    scanf("%d", &n);
    vet = (int *) malloc(n*sizeof(int));
    for(i = 0; i < n; i++){
        printf("%d - ", i);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < n; i++){
        printf("%d - %d / ", i,  *(vet + i));
    }
    free(vet);
    return 0;
}