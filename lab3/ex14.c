#include <stdio.h>

float notas( float *media, float *pond, float n1, float n2);
int main()
{
float nota1, nota2;

scanf("%f %f", &nota1, &nota2);
float x,y;

notas(&x, &y, nota1, nota2);

    return 0;
}

float notas( float *media, float *pond, float n1, float n2)
{
*media = (n1 + n2) / 2;
*pond = (n1 + n2*2)/3;
printf("media: %.2f\n pond:%.2f", *media, *pond);
}
