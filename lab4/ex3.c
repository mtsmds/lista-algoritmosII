#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x, par = 0, imp = 0;
    int *p;
    printf("digite tamanho do vetor");
    scanf("%d", &x);
    p = (int*)malloc (x*sizeof (int));

   for(i=0;i<x;i++)
   {
    scanf("%d", &p[i]);
   
   }
   for(i=0; i<x;i++)
   {
    printf("posicao %d: %d\n", i, p[i]);
    if(p[i] % 2 == 0)
    {
        par++;
    }else if (p[i] % 2 != 0)
    {
        imp++;
    }

   }
   printf("pares: %d\n impares: %d", par, imp);
   free(p);
}