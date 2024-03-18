#include<stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);
    int a = n/100;
    int b = n - (a*100);
    int c = b / 50;
    int d = b - (c*50);
    int e = d / 20;
    int f = d - (e*20);
    int g = f / 10;
    int h = f - (g*10);
    int i = h / 5;
    int j = h - (i*5);
    int k = j / 2;
    int l = j - (k*2);
    int sum = ((a*100)+(c*50)+(e*20)+(g*10)+(i*5)+(k*2));
    double summ = n - sum;
    int aa = summ / 1;
    double bb = summ - (aa*1);
    int cc = bb / 0.5;
    double dd = bb - (cc*0.5);
    int ee = dd / 0.25;
    double ff = dd - (ee*0.25);
    int gg = ff / 0.10;
    double hh = ff - (gg*0.10);
    int ii = hh / 0.05;
    double jj = hh - (ii*0.05);
    int kk = jj/0.01;
    //printf("NOTAS:\n");
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",c);
    printf("%d nota(s) de R$ 20.00\n",e);
    printf("%d nota(s) de R$ 10.00\n",g);
    printf("%d nota(s) de R$ 5.00\n",i);
    printf("%d nota(s) de R$ 2.00\n",k);
    //printf("MOEDAS:\n");
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",aa);
    printf("%d moeda(s) de R$ 0.50\n",cc);
    printf("%d moeda(s) de R$ 0.25\n",ee);
    printf("%d moeda(s) de R$ 0.10\n",gg);
    printf("%d moeda(s) de R$ 0.05\n",ii);
    printf("%d moeda(s) de R$ 0.01\n",kk);
    return 0;

}