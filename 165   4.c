#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int b,cnt=0,i;
    int c[6];
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
     if(b<a[i]){    
        cnt=i;
     break;
    }
  }
    for(i=0;i<6;i++){
        if(i<cnt)
        c[i]=a[i];
        else if(i==cnt)
        c[i]=b;
        else
        c[i]=a[i-1];
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}