#include<stdio.h>
int main()
{
int i,v,n[10];
scanf("%d",&v);
for(i=0;i<10;i++)
{
    printf("N[%d] = %d\n",i,v);
    v=v*2;
}
        return 0;
}
