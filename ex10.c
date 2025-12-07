#include <stdio.h>

int main()
{
    
    int mat[5];
    int i;
    int *x;

    for(i = 0; i<5; i++)
    {
        scanf("%d", &mat[i]);
       x = &mat[i];
        printf("%d", *x * 2);
    }
    

        
    
return 0;
}
