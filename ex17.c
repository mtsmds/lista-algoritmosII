#include <stdio.h>

int numm(int valor1, int valor2);

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if(n1>0 && n2>0)
    {
    printf("soma: %d", (numm(n1, n2)));
    }else{
        printf("apenas possitivos");
    }
}

int numm(int valor1, int valor2)
{
    int soma=0;
    if(valor1<valor2)
    {
for(int i = valor1; i<valor2; i++)
{
    soma += i;
}
    }else{
        for(int i = valor2; i<valor1; i++)
{
    soma += i;
}
    }
    return soma;
}