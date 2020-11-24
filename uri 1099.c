#include<stdio.h>
int main()
{
 int N,i,x,y,s=0,temp,j;
 scanf("%d",&N);
 for(i=0;i<N;i++){
    scanf("%d%d",&x,&y);
    if(x>y){temp=x;x=y;y=temp;}
    if(x%2==0) x--;
    x+=2;
 for(j=x;j<y;j=j+2)
 {
         s=s+j;
 }
printf("%d\n",s);
s=0;
 }
return 0;
}
