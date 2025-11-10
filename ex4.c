#include <stdio.h>
#include <math.h>

float quadrado(float valor);

int main()
{
    float num;
    scanf("%f", &num);
    if((quadrado(num)) == 0)
    {
printf("o numero %.1f é um quadrado perfeito  ", num, (quadrado(num)));
    }else{
        printf("nao e quadrado perfeior");
    }
}

float quadrado(float valor)
{
valor = sqrt(valor);
return (valor - floor(valor));
}