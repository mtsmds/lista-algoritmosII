#include <stdio.h>
#include <math.h>

float temperatura(float celsius);

int main()
{
    int num;
    scanf("%d", &num);
    printf("temperatura em farenhight: %.2f", (temperatura(num)));

}

float temperatura ( float celsius)
{
    return (celsius * ( 9.0/ 5.0)) + 32.0;
}