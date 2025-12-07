#include <stdio.h>
#include <math.h>


int raizes(float A, float B, float C, float *X1, float *X2);
int main()
{
float a, b,c;

scanf("%f %f %f", &a, &b, &c);
float x,y;

raizes(a, b, c, &x, &y);

    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2)
{
float delta;
delta = (B*B) - 4*A*C;
*X1 = (-B + sqrt(delta)) / (2*A);
*X2 = (-B - sqrt(delta)) / (2*A);
if(A==0){
    printf("erro: a =0");
}
else if(A<0)
{
printf("X'=%f", *X1);
}else{
    printf("X'=-%f\n x''= %f", *X1, *X2);
}
}
