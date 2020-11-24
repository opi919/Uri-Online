#include<stdio.h>
 int main()
{
int product1,product2,a,c;
float b,d,x;
scanf("%d%d%f",&product1,&a,&b);
scanf("%d%d%f",&product2,&c,&d);
x=(a*b)+(c*d);
printf("VALOR A PAGAR: R$ %.2f\n",x);
return 0;
}
