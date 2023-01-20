#include <stdio.h>
#include <stdlib.h>

struct Produtos{
    int codigo, quantidade, aux_preco, aux_quantidade;
    char nome[50];
    float preco;
};
 
int main()
{
    int n, i, maior_preco, maior_quantidade;
    struct Produtos *produtos;
    printf("Digite a quantidade de produtos que deseja introduzir informacoes: \n");
    scanf("%d",&n);
    getchar();
    produtos = malloc(sizeof(struct Produtos)*n);
    for(i = 0; i < n; i++){
        printf("Produto (%d): \n",i);
        printf("Nome do produto: ");
        fgets(produtos[i].nome,50,stdin);
        fflush(stdin);
        printf("Codigo do produto: ");
        scanf(" %d",&produtos[i].codigo);
        fflush(stdin);
        printf("Quantidade do produto: ");
        scanf(" %d",&produtos[i].quantidade);
        fflush(stdin);
        printf("Preco do produto: ");
        scanf(" %f",&produtos[i].preco);
        fflush(stdin);
        getchar();
    }
    maior_preco = produtos[0].preco;
    maior_quantidade = produtos[0].quantidade;
    for(i = 1;i < n; i++){
      if(maior_preco < produtos[i].preco){
        maior_preco = i;
      }
      if(maior_quantidade < produtos[i].quantidade){
        maior_quantidade = i;
      }
    }
    printf("Produto com o maior preco: (%d) - ", maior_preco);
    for(i = 0; produtos[maior_preco].nome[i] != '\0'; i++){
      printf("%c",produtos[maior_preco].nome[i]);
    }
    printf("Produto com o maior preco: (%d) - ", maior_quantidade);
    for(i = 0; produtos[maior_quantidade].nome[i] != '\0'; i++){
      printf("%c",produtos[maior_quantidade].nome[i]);
    }

    free(produtos);
    produtos = NULL;
    return 0;
}