#include<stdio.h>
int main()
{
int n,i,s;
scanf("%d",&n);
for(i=1;i<11;i++){
      s=i*n;
    printf("%d x %d = %d\n",i,n,s);
}
return 0;
}
