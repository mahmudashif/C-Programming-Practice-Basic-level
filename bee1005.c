#include<stdio.h>

main()
{
    double A,B,sum,MEDIA;
    scanf("%lf%lf",&A,&B);
    sum=(A*3.5)+(B*7.5);
    MEDIA=sum/(3.5+7.5);
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}