#include <stdio.h>

int main()
{
    int x, i;
    char *p;
    printf("qual o tamanho da string?");
    scanf("%d", &x);

p = aloc(x);
 

}

char * aloc(int y)
{
    char *p;

    p = (char *) malloc(y * sizeof(char));

    return &p;
}