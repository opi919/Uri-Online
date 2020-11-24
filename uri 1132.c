#include<stdio.h>
int main()
{
int x,y,i,s=0,t;
scanf("%d%d",&x,&y);
if(x>y){t=x;x=y;y=t;}
for (i=x;i<=y;i++){
    if(i%13!=0) s=s+i;
}
printf("%d\n",s);
return 0;
}
