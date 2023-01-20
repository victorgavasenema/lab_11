#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **matriz, m, n, i, j;
    printf("Escreva o tamanho da linha e da coluna: ");
    scanf("%d %d", &m, &n);
    matriz = malloc(i*sizeof(int*));
    for(i = 0; i < m; i++){
        matriz[i] = malloc(n*sizeof(int*));
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("(%d)(%d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < j; i++){
        for(j = 0; j < j; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
