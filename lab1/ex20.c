#include <stdio.h>
#include <math.h>

int primo(int valor1);

int main()
{
    int  num;
    scanf("%d", &num);
    printf("resultado: %d", (primo(num)));
}

int primo(int valor1)
   {
     int cont = 0, a = valor1;
    for(int i=0; i<=valor1; i++)
    {
        for (int i = 2; i * i <= valor1; i++)
            {
              if (valor1 % i == 0)
              { 
                 cont++;
              }
    }
    return cont;
}
   }
