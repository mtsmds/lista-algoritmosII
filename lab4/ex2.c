#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
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
   }
   free(p);
}