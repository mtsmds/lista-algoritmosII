#include <stdio.h>
#include <math.h>

int fator(int valor1);

int main()
{
    int  num;
    scanf("%d", &num);
    printf("resultado: %d", (fator(num)));
}

int fator(int valor1)
{
    int soma;
   if(valor1 > 0)
   {
    for(int i; i<=valor1; i++)
    {
soma = soma + i;
    }
    return soma;
   } 
}
