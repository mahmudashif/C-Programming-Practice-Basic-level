#include<stdio.h>
int main(){
   int days,due,y,m,d;
   scanf("%d",&days);
   y = days / 365;
   due = days % 365;
   m = due / 30;
   d = due - (m*30);

printf("%d ano(s)\n",y);
printf("%d mes(es)\n",m);
printf("%d dia(s)\n",d);
return 0;
}