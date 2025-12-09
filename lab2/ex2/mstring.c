#include "mstring.h"
//maiusculo

void mstrupper(char s[])
{
    int i;

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] > 96 && s[i] < 123)
        {
            s[i] -= 32;
        }
    }
    
}

//minuscula
void mstrlower(char s[])
{
    int i;

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] < 91 && s[i] > 64)
        {
            s[i] += 32;
        }
    }
}

//tamanho
int mstrlen(char s[])
{
    int i,tamanho=0;
    for(i=0;s[i]!='\0';i++)
    {
        tamanho++;
    }
    return tamanho - 1;
}   


                                                        
//vogais
int mcount_vogais(char s[])
{
    int i;
    int cont = 0;

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == 65 || s[i] == 97 ||s[i] == 69 ||s[i] == 101 ||s[i] == 73 ||s[i] == 105 ||s[i] == 79 ||s[i] == 111 ||s[i] == 85 ||s[i] == 117)
        {
            cont = cont + 1;
        }
    }
    return cont;
}



// tirar espaço

void mremove_espacos(char s[])
{
int i;
char novastring[50];

    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == 32)
        {
           s[i] = s[i+1];
        }
    }
}

/// palindromo
    int meh_palindromo(char s[])
    {
        int tam = mstrlen(s);
        int i, inv = 0;
    char string1[50];

    for(i=tam-1; i >=0; i--)
    {

        string1[inv] = s[i];
        inv++;
    }
    string1[inv] = '\0';
    for(i = 0; i < tam; i++)
    {
        if(string1[i] != s[i])
        {
            return 0;
    }
    
    }
    return 1;
}

//copia
void mstrcpy(char dest[], char orig[])
{
        int i, inv = 0;
    
    for(i=0; orig[i] != '\0'; i++)
    {
        dest[inv] = orig[i];
        inv++;
    }
    dest[inv] = '\0';
}
