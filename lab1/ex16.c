#include <stdio.h>
#include <math.h>

int desenha_linha(int valor1);

int main()
{
    int  num;
    scanf("%d", &num);
   
    for(int i=1; i <=(desenha_linha(num)); i++)
{
 printf("=");
}

   
}

int desenha_linha(int valor1)
   {
    int cont=0;
     for(int i = 1; i <= valor1; i++)
     {
        cont++;
     }
     return cont;
    
}
