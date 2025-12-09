#include <stdio.h>
#include <math.h>
float volume(float raio);

int main()
{
    float num;
    scanf("%f", &num);
    printf("volume : %f", (volume(num)));
}
float volume(float raio)
{
    float vol;
    vol = (3.14 * 4 * pow(raio, 3)) / 3;
    return vol;
}