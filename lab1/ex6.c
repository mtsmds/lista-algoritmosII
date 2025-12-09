#include <stdio.h>

int tempo (int horas, int minutos, int segundos);

int main()
{
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    printf("tempo em segundis: %d", (tempo(h,m,s)));
}

int tempo (int horas, int minutos, int segundos)
{
return segundos + ((horas * 60)*60) + (minutos * 60);
}