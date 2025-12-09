#include "pessoa.h"
#include <stdio.h>

int main()
{
    Pessoa p0;
  char lernome[50];
  int leridd;

  scanf("%d %s", &leridd, &lernome);

p0= criarPessoa(lernome, leridd);
mostrarPessoa(p0);
}