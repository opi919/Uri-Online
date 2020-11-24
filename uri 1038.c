#include<stdio.h>
 int main()
{
int i,x,y;
float a[6]={0,4.00,4.50,5.00,2.00,1.50};
float b;
scanf("%d%d",&x,&y);
for(i=1;i<=6;i++)
{
    if(i==x)
       b=a[i]*y;
}
printf("Total: R$ %.2f\n",b);
return 0;
}

