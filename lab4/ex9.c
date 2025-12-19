#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, x, y = 10;
    int * p;
    do{
        p = (int *) realloc(*p, y* sizeof(int));
        printf("digite um numero");

         scanf("%d", &p[y]);
       y++;
       printf("yu%d\n\n", p[y]);
       printf("%d", p);
    }
    while(p[y] > 0);
    for(i = 0; i> y; i++)
    {
        printf("vetor: %d", p[i]);
    }
    return 0;
}