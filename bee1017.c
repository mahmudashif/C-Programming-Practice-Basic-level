#include<stdio.h>
int main()
{
    float x,y,j;
    float fuel;
    scanf("%f%f",&x,&y);
    j = x*y;
    fuel = j/12;
    printf("%.3f\n",fuel);
    return 0;
}
