#include <stdio.h>

void alteravalor (int *x, float *y, char *z);
int main()
{
    int a = 20;
    char b = 'o';
   float c = 3.1;
   
printf(" a: %d, b: %c, c: %.2f", a,b,c);
alteravalor(&a,&c,&b);
printf(" a: %d, b: %c, c: %.2f", a,b,c);

}

void alteravalor (int *x, float *y, char *z)
{

 *x = 220;
*y = 8.9;
*z = 'a';
}
