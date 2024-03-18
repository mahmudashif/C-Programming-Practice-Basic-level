#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,r,r2,x,y,i;
    scanf("%lf%lf%lf",&A,&B,&C);
    i = (B*B)-(4*A*C);
    x = -B + sqrt(i);
    y = -B - sqrt(i);
    r = x/(2*A);
    r2 = y/(2*A);
    if(((B * B) - 4 * A * C) < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\n",r);
        printf("R2 = %.5lf\n",r2);
    }
    return 0;
}
