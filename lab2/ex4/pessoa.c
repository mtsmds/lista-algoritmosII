#include "pessoa.h"
#include <stdio.h>
#include <string.h>


Pessoa criarPessoa(char nome[], int idade)
{Pessoa p;
strcpy(p.nome, nome);
 p.idade = idade;

return p;
}
void mostrarPessoa(Pessoa p)
{
printf("Nome: %s \n Idade: %d", p.nome, p.idade);
}