#include<stdio.h>
 int main()
{
int x,y,z,w,q,v,r;
scanf("%d",&x);
y=x%100;
z=y%50;
w=z%20;
q=w%10;
v=q%5;
r=v%2;
printf("%d\n",x);
printf("%d nota(s) de R$ 100,00\n",x/100);
printf("%d nota(s) de R$ 50,00\n",y/50);
printf("%d nota(s) de R$ 20,00\n",z/20);
printf("%d nota(s) de R$ 10,00\n",w/10);
printf("%d nota(s) de R$ 5,00\n",q/5);
printf("%d nota(s) de R$ 2,00\n",v/2);
printf("%d nota(s) de R$ 1,00\n",r);
return 0;
}
