#include <stdio.h>
#include "operacoes.h"

int main()
{
    char operacao;
    int valor1, valor2;

    printf("digite o simbolo da sua operacao/n");
    scanf("%c", &operacao);
    scanf("%d %d", &valor1, &valor2);
    switch (operacao)
    {
    case '+':
        printf("%d", (soma(valor1, valor2)));
        break;
    case '-':
        printf("%d", (subtrai(valor1, valor2)));
        break;

    case '*':
        printf("%d", (multiplica(valor1, valor2)));
        break;
    
    case '/':
    printf("%d", (divide(valor1, valor2)));
    }

    return 0;
}