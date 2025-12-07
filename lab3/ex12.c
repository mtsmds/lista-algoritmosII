#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main()
{
    float num;
    float fr;
    int x;
    scanf("%f", &num);
    frac(num, &x, &fr);
return 0;
}

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
  printf("num: %f \n parte int: %d \n parte frac: %f", num, *inteiro, *frac);
}
