#include<stdio.h>
#include<math.h>
 int main()
{
float a,b,c,d,e,f,g;
scanf("%f%f%f",&a,&b,&c);
d=b*b-(4*a*c);
if(d<0 || a==0) printf("Impossivel calcular\n");
else
{
    g=sqrt(d);
    e=(-b+g)/(2*a);
    f=(-b-g)/(2*a);
    printf("R1 = %.5f\n",e);
    printf("R2 = %.5f\n",f);
}
return 0;
}
