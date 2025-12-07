#include <stdio.h>

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float raio;
    float area;
    float vol;

    scanf("%f", &raio);
    calc_esfera(raio, &area, &vol);
return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = 3.14 * 4 *(R*R);
    *volume = 1.333 * 3.14*(R*R*R);

    printf("area: %f\n vol: %f\n", *area, *volume); 
}