#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL; //
    int i, cont =0;
    
    p = (int *) calloc(1500, sizeof(int));
    for(i = 0; i<1500; i++)
    {
        if(p[i] == 0)
        {
            cont++;
            p[i] = i;
        }
    }

    for(i = 0; i<10; i++)
    {
        printf("valor %d: %d\n", i, p[i]);
    }
    printf("\n\n\n");

    for(i = 1490; i < 1500; i++)
    {
        printf("valor %d: %d\n", i, p[i]);
    }
    
    printf("zeros: %d\n", cont);

    free(p);
    return 0;
}