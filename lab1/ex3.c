#include <stdio.h>

int pos(int num);

int main()
{
    int n1;
    scanf("%d", &n1);
    printf("retorno: %d", (pos(n1)));
}


int pos(int num)
{
    if(num >0)
    {
        return 1;
    }
    else if( num<0)
    {
    return -1;
    }
    else if(num == 0)
    {
 return 0;
    }
}