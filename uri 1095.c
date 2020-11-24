#include<stdio.h>
int main()
{
int I,J=65;
for (I=1;I<39;I+=3)
    printf("I=%d J=%d\n",I,J-=5);
return 0;
}
