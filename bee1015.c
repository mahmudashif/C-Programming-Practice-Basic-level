#include<stdio.h>
int main()
{
    double x1,x2,y1,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    double X,Y,Distance,X1,Y1,last;
    X = x2-x1;
    Y = y2-y1;
    X1 = X*X;
    Y1 = Y*Y;
    Distance = X1+Y1;
    last = sqrt(Distance);
    printf("%.4lf\n",last);
    return 0;
}
