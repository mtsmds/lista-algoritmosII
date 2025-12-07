#include <stdio.h>
int soma (int *A, int B);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
soma(&a,b);
printf("valor de a somado: %d\n b: %d\n", a,b);

}

int soma (int *A, int B)
{
*A = (*A+B);

}