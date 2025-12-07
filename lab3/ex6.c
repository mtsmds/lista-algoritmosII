#include <stdio.h>
int dobro (int x, int y);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
printf("o dobro eh: %d\n", dobro(a, b));
a = dobro(a, NULL);
b = dobro(NULL, b);
printf("valor de a dobrado: %d\n b dobrado: %d\n", a, b);
}

int dobro (int x, int y)
{
   return (x*2)+(y*2);
    
    
}
