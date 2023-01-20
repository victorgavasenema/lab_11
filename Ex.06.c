#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, op;
    int *vet;
    printf("Escreva o tamanho do vetor: ");
    scanf("%d", &n);
    vet = (int *)calloc(n, sizeof(int));
    fflush(stdin);
    do{
        printf("1- Inserir valor em uma determinada posição.\n");
        printf("2- Consultar valor.\n");
        printf("3- Sair.\n");
        printf("OP.: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Escreva a posição: ");
                scanf("%d", &x);
                if(x > n){
                    printf("Opcao invalida\n");
                }
                else{
                    printf("Escreva o valor: ");
                    scanf("%d", &vet[x]);
                }
            break;
            case 2:
            printf("Escreva a posição que deseja ver: ");
            scanf("%d", &x);
            if(x > n){
                printf("Opcao invalida\n");
            }
            else{
                printf("(%d): %d\n", x, vet[x]);
            }
            break;
        }
    }while(op != 3);
    free(vet);
    vet = NULL;
    return 0;
}