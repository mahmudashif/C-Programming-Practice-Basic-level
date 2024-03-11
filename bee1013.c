#include<stdio.h>
int main()
{
    int a,b,c,large;
        scanf("%d%d%d",&a,&b,&c);
    large = a;
    if(a<b || a<c)
    {
        if(b<c)
        {
            large = c;
        }
        else
        {
            large = b;
        }
    }
   printf("%d eh o maior\n",large);
    return 0;
}
