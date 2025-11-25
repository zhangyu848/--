#include<stdio.h>
int f(int a,int b);
int main()
{
    int x,y;
    scanf("%d",&x);
      printf("y=%d",f(x,y));
    return 0;
}
int f(int a,int b){
    if(a<1)
    return a;
if(a>=1&&a<10)
return 2*a-1;
if(a>=10)
return 3*a-11;
}