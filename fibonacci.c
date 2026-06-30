#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main(int argc, char *argv[]) {
    int n, resultado;
    char saida[100];

    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        printf("Digite um numero inteiro maior ou igual a zero: ");
        scanf("%d", &n);
    }

    resultado = fibonacci(n);
    sprintf(saida, "O fibonacci de %d e %d\n", n, resultado);
    printf("%s", saida);

    FILE *arquivo = fopen("fibonacci.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%s", saida);
        fclose(arquivo);
    }

    printf("Criado por Marcelo Mendes Sa");

    return 0;
}
