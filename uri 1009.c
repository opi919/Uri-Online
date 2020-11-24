#include<stdio.h>
 int main()
{
    char name[10];
    double a,b,x;
scanf("%s%lf%lf",&name,&a,&b);
x=a+(b*0.15);
printf("TOTAL = R$ %.2lf\n",x);
return 0;
}
