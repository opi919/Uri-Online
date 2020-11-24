#include<stdio.h>
 int main()
{
int n[20],a[20],i,j=19;
for(i=0;i<20;i++,j--){
    scanf("%d",&n[i]);
    a[j]=n[i];
}
for(i=0;i<20;i++)
    printf("N[%d] = %d\n",i,a[i]);
return 0;
}
