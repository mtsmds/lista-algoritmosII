#include <stdio.h>

void desenho(int n);

int main()
{
    int n1;
    scanf("%d", &n1);
    (desenho(n1));
}

void desenho(int n)
{
    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}