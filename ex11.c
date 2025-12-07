
#include <stdio.h>

int main()
{
    
    int mat[5];
    int pares[5];
    int i, h;
    int *x;

    for(i = 0; i<5; i++)
    {
        scanf("%d", &mat[i]);
        }
     
    for(i = 0; i<5; i++)
    {
        if(mat[i] % 2 == 0)
        {
            printf("%p\n", &mat[i]);
        }
    
    }

        
    
return 0;
}