#include<stdio.h>

int main()
{
    int x,y,temp;
    scanf("%d%d",&x,&y);
    if(x>y) {temp=x;x=y;y=temp;}
   if(y%x==0) printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");
    return 0;
}
