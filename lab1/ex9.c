#include <stdio.h>
#include <math.h>

float cilindro(float valor1, float valor2);

int main()
{
    float h, r;
    scanf("%f %f", &h, &r);
    printf("resultado: %.2f", (cilindro(h, r)));

}

float cilindro ( float valor1, float valor2)
{
  return 3.141592*(valor2 * valor2)*valor1;
}