#include<stdio.h>
 int main()
{
double x,y,z,m,n,o,t;
scanf("%lf%lf%lf",&x,&y,&z);
if(x<y){t=x;x=y;y=t;}
if(x<z) {t=x;x=z;z=t;}
if(y<z){t=y;y=z;z=t;}
m=x*x;
n=y*y;
o=z*z;
if(x>=y+z) printf("NAO FORMA TRIANGULO\n");
else{
    if(m==n+o) printf("TRIANGULO RETANGULO\n");
if(m>n+o) printf("TRIANGULO OBTUSANGULO\n");
if(m<n+o) printf("TRIANGULO ACUTANGULO\n");
if(x==y && y==z)printf("TRIANGULO EQUILATERO\n");
else if(x==y || x==z || y==z) printf("TRIANGULO ISOSCELES\n");
}
return 0;
}


