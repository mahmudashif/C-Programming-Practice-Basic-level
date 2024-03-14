#include<stdio.h>
int main(){
   int time,due;
      int h,m,s;

   scanf("%d",&time);
   h = time /3600;
   due = time - (h*3600);
   m = due / 60;
   s = due - (m*60);

   printf("%d:%d:%d\n",h,m,s);
}