#include<stdio.h>
int main()
{
int x,i;
scanf("%d",&x);
if(x%2==0) x+=1;
for(i=x;i<(x+12);i+=2){
printf("%d\n",i);
}
return 0;
}
