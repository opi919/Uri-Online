#include<stdio.h>
int main()
{
int x,i,s=0;
for(i=0;i<5;i++){
    scanf("%d",&x);
    if(x%2==0) s++;
}
printf("%d valores pares\n",s);
return 0;
}
