#include <stdio.h>
#include <math.h>

float maior(float valor1, float valor2);

int main()
{
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    printf("maior: %.2f", (maior(num1, num2)));

}

float maior ( float valor1, float valor2)
{
    if(valor1 > valor2)
    {
        return valor1;
    }else{
        return valor2;
    }
}