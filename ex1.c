#include <stdio.h>
int dobro(int valor);

int main()
{
    int num;
    printf("digite um numero\n");
    scanf("%d", &num);
    printf("%d", (dobro(num)));
}
int dobro(int valor)
{
    return valor * 2;
}
