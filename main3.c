#include "conversor.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    int x;
    float temp;
    do{
    printf("digite: \n 1 para converter celsius para fahrenheight\n 2 para converter fahrenheight para celsius\n 0 para sair");
    scanf("%d", &x);
   
        
    switch (x)
    {
    case 1:
     printf("digite a temperatura para converter");
        scanf("%f", &temp);
        printf("conversao: %f", celsius_fahrenheit(temp));

        break;

    case 2: 
     printf("digite a temperatura para converter");
        scanf("%f", &temp);
        printf("conversao: %f", fahrenheit_celsius(temp));
    break;
    case 0:
    printf("sair");
}
    }
while(x != 0);

}