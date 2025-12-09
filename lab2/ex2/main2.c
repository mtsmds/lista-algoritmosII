#include "mstring.h"
#include <stdio.h>

int main()
{
char string[50]= "aaaAAA";
int x;
char dest[50];
do{
printf("\n////////////////////////\ndigite uma palavra e em seguida o que fazer com ela \n/////////////////////////\n");
printf("\n 0: sair \n 1: minusculo \n 2: maiusculo \n 3: tamanho da string  \n 4: remove espaco em branco  \n 5: conta as vogais  \n 6: verifica se eh palindromo(1 ou 0) \n 7:copia a string \n  ");
   fgets(string, sizeof(string), stdin);
   scanf("%d", &x);
getchar();
switch (x)
{
case 1:
    mstrlower(string);
printf("minusculo: %s", string);
    break; //OK
    case 2:
    mstrupper(string);
    printf("\n\nmaiusculo: %s", string);
     break; //OK
    case 3:
    printf("\n\ntamanho: %d", (mstrlen(string)));
    break; //ok
    case 4: mremove_espacos(string);
    printf("\n \nsem espacos: %s",string);
    break; //OK
     case 5:
    printf("\n\nvogais: %d\n", mcount_vogais(string));
    break; //ok
     case 6: 
    printf("\n\npalindromo? %d",meh_palindromo(string));
    break; // ok
    case 7:
    mstrcpy(dest, string);
printf("\n\ncopia: %s", dest);

default:
    break;
}
}
while(x != 0);


    return 0;
}
    