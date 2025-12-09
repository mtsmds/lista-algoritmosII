#include <stdio.h>
#include <math.h>

float hipo(float valor1, float valor2);

int main()
{
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    printf("resultado: %.2f", (hipo(num1, num2)));

}

float hipo ( float valor1, float valor2)
{
  return sqrt((pow(valor1, 2) + pow(valor2, 2)));
}