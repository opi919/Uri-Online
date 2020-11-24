#include<stdio.h>
int main()
{
float x,i,y=0;
int s=0;
for(i=0;i<6;i++){
scanf("%f",&x);
if(x>0){
    s++;
y+=x;
}
}
printf("%d valores positivos\n",s);
printf("%.1f\n",y/s);
return 0;
}
