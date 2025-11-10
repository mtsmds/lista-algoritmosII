#include <stdio.h>

float notas (float nota1, float nota2, float nota3, char letra);

int main()
{
    float n1, n2, n3;
    char a;
    scanf("%f %f %f %c", &n1, &n2, &n3, &a);
    printf("tempo em segundis: %f", (notas(n1,n2,n3, a)));
}

float notas (float nota1, float nota2, float nota3, char letra)
{
if(letra == 'A' || 'a')
{
return (nota1 + nota2 + nota3)/ 3;
}
else if (letra == 'p' || 'P')
{
    return ((nota1 * 5) + (nota2 *3) + (nota2*2))/10;
}
}