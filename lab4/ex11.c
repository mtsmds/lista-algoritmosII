#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
   int matricula;
   int ano_nascimento;
   char sobrenome[20];
} cadastro;

int main()
{
    int alunos, x, i;
    int *p =NULL;

    printf("quantos alunos?");
    scanf("%d", &alunos);

    p = (int *)malloc(x * sizeof(cadastro));

        for(i = 0; i>alunos;i++)
        {
            printf("digite o nome do aluno %d", i);
            scanf("%c", &cadastro.nome);

        }

}
