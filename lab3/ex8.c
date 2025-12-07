#include <stdio.h>

int main()
{
    
    float mat[2][5];
    int i, j;
    
    
    for(i=0; i<= 2; i++)
    {
        for(j = 0; j <= 5; j++)
        {


        printf("%p\n", &mat[i][j]);

        }
    }
return 0;
}
