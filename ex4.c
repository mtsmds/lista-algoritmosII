#include <stdio.h>
void alteravalor (int x, int y);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
alterarvalor(a, b);

}

void alterarvalor (int x, int y)
{
int alt;
alt = x;
x = y;
y = alt;
printf("%d %d", x, y);
}