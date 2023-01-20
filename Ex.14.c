#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **matriz, i, j, x, y;
    printf("Escreva o tamanho da linha e da coluna: ");
    scanf("%d %d", &i, &j);
    matriz = malloc(i*sizeof(int*));
    for(x = 0; x < j; x++){
        matriz[x] = malloc(j*sizeof(int*));
    }

    for(x = 0; x < j; x++){
        for(y = 0; y < j; y++){
            printf("(%d)(%d): ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }
    
    for(x = 0; x < j; x++){
        for(y = 0; y < j; y++){
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}
    