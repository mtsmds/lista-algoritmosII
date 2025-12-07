#include <stdio.h>

int main()
{
    int a, b;


    if(&a>&b)
    {
        printf("endereco a: %p\n", &a);
    }else{
        printf("endereco b: %p\n", &b);
    }
printf("%p %p", &a, &b);
    scanf("%d %d", &a, &b);

    if(&a<&b)
    {
        printf("endereco b: %p\n", &b);
    }else{
        printf("endereco a: %p\n", &a);
    }
printf("%p %p", &a, &b);
}