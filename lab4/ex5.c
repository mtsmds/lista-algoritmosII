#include <stdio.h>

int main()
{
    int num, i, x , cont=0;
    printf("digite o tamanho do vetor");
    scanf("%d", &num);
    int *p;

    p = (int *) malloc(num * sizeof(int));
    printf("digite um numero para verificar multiplos");
scanf("%d", &x);



for(i = 0; i <= num; i++)
{
    printf("digite um valor:\n");
    scanf("%d", &p[i]);
}
//ok^^
for(i = 0; i<= num; i++)
{
    if(p[i] % x == 0)
    {
        cont++;
    }

}

printf("numero de multiplo: %d", cont++);
free(p);
}