#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    double *p;
    printf("digite tamanho do vetor");
    scanf("%d", &x);
    if(x<10)
    {
        x = 10;
        p = (double*)malloc (10*sizeof (double));
    }else{

    p = (double*)malloc (x*sizeof (double));

    }

    for(i = 0; i<x; i++)
    {
        p[i] = rand () % 100;
       
    }

        for(i = 0; i< x; i++)
        {


    printf("primeiros 10: %.2lf\n", p[i]);
        }
        free(p);
        return 0;

}
