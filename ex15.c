#include <stdio.h>
#include <math.h>

void triangulo(int valor1, int valor2, int valor3);

int main()
{
    int l1, l2, l3;
    scanf("%d %d %d", &l1, &l2, &l3);
    (triangulo(l1, l2, l3));

}

void triangulo ( int valor1, int valor2,int valor3)
{
if(valor1< (valor2 + valor3))
{
    if((valor2< (valor1 + valor3)))
    {
        if(valor3< (valor2 + valor1))
        {
            if(valor1==valor2 && valor2==valor3)
            {
                printf("triangulo equilatero");
            }
            else if(valor1 != valor2 && valor2 != valor3 && valor3 != valor1)
            {
                printf("triangulo escaleno");
            }
            else if((valor1==valor2 && valor3!=valor1)|| (valor2==valor3 && valor1!= valor3))
            {
                printf("triangulo isoceles");
            }
        }
    }
}
}
