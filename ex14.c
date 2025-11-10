#include <stdio.h>
#include <math.h>

float carro(float valor1, float valor2);

int main()
{
    float km, litro;
    scanf("%f %f", &km, &litro);
    if( (carro(km, litro)) == 1)
    {
printf("venda o carro");
    }
    else if((carro(km, litro)) == 2)
{
    printf("economico");
}else if((carro(km, litro)) == 3)
    printf("super economico");
}

float carro ( float valor1, float valor2)
{
    float kl;
    kl = valor1/valor2;
    if(kl<8)
    {
        return 1;
    }
    else if(kl>8 && kl<14)
    {
    return 2;
    }
    else if(kl>14)
    {
    return 3;
    }
}
