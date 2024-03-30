#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y;
    double price[5] = {4.00 , 4.50 , 5.00 , 2.00 , 1.50};
    scanf("%d%d",&X,&Y);
    if(X == 1)
    {
        printf("Total: R$ %.2lf\n",price[0]*Y);
    }
    else if(X == 2)
    {
        printf("Total: R$ %.2lf\n",price[1]*Y);
    }
    else if(X == 3)
    {
        printf("Total: R$ %.2lf\n",price[2]*Y);
    }
    else if(X == 4)
    {
        printf("Total: R$ %.2lf\n",price[3]*Y);
    }
    else if(X == 5)
    {
        printf("Total: R$ %.2lf\n",price[4]*Y);
    }
    return 0;
}
