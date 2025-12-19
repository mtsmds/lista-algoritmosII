#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,cont, lot[5], bilhete[5], x=0, con=0;
    int *p;

for(i = 0; i < 5; i++)
{
    printf("digite a loteria");
    scanf("%d", &lot[i]);
}

for(i = 0; i < 5; i++)
{
    printf("digite seu bilhete");
    scanf("%d", &bilhete[i]);
}

for(i = 0; i < 5; i++)
{
   for( j = 0; j<5; j++)
   {
    if(bilhete[i] == lot[j])
    {
        x++;
break;
    }
   }
}
p = (int *)malloc(x * sizeof(int));
for(i = 0; i < 5; i++)
{
    cont =  0;
    p[i] = -1;
   for( j = 0; j<5; j++)
   {
    if(bilhete[i] == lot[j])
    {
       cont = 1;
            break;
   }
        
    }

     if(cont == 1)
     {
         printf("bilhete%d\n", bilhete[i]);   //ok
            p[i] = bilhete[i];
        
     }else{
        p[i] = NULL;
     }
   }
for(i = 0; i< 5; i++)
{
    printf("numeros certos: %d\n", p[i]);
}
for(i = 0; i< 5; i++)
{
    printf("numeros do bilhete: %d\n", bilhete[i]);
}
for(i = 0; i< 5; i++)
{
    printf("numeros da loteria: %d\n", lot[i]);
}
 free(p);
}
