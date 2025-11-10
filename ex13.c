#include <stdio.h>

float operacao (float nota1, float nota2, char letra);

int main()
{
    float n1, n2;
    char a;
    scanf("%f %f %c", &n1, &n2, &a);
    printf("resultado: %.2f", (operacao(n1,n2,a)));
}

float operacao (float nota1, float nota2, char letra)
{
switch (letra)
{
case '+':
   return nota1+nota2;
    break;
case '-':
return nota1 - nota2;
break;
case '*':
return nota1*nota2;
break;
case '/':
return nota1/nota2;
break;
default:
    break;
}
}