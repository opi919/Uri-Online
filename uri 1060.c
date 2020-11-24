#include<stdio.h>
 int main()
{
int i,s=0;
float x;
for(i = 0;i < 6;i++){
  scanf("%f",&x);
  if(x>0) s++;
}
printf("%d valores positivos\n",s);
return 0;
}
