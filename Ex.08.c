#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet, i;
    vet = (int*)calloc(1500, sizeof(int));
    for(i = 0; i < 1500; i++){
        vet[i] = i;
    }
    for(i = 0; i < 1500; i++){
        if(i == 11){
            i = 1490;
        }
        printf("(%d)- %d.\n", i, vet[i]);
    }
    free(vet);
    vet = NULL;
    return 0;
}