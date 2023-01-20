#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    char *vet;
    printf("Escreva o tamanho da string: ");
    scanf("%d", &n);
    vet = (char *)malloc(sizeof(char)*n);
    fflush(stdin);
    printf("Escreva a string: ");
    fgets(vet ,n ,stdin);
    for(i = 0; *(vet + i) != '\0'|| i < n; i++){
        if(vet[i] != 'a'&& vet[i] != 'e'&& vet[i] != 'i' && vet[i] != 'o' && vet[i] == 'u'){
            printf("%c", *(vet + i));
        }
    }
    free(vet);
    vet = NULL;
    return 0;
}