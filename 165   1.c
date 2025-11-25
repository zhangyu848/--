#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100];
    int i,j=0,k=0;
    int cnt;
    for(i=0;i<100;i++)
    {
        a[i]=i+1;
    }
    for(i=0;i<100;i++)
    {
        if(a[i]%2==0||a[i]%3==0||a[i]%5==0||a[i]%7==0||a[i]%11==0||a[i]%13==0)
          cnt++;  
    }
    int*b=(int*)malloc(cnt*sizeof(int));
    for(i=0;i<100;i++)
    {
        if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0&&a[i]%7!=0&&a[i]%11!=0&&a[i]%13!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
     //   printf("%d ",j);//test
        for(i=0;i<j;i++)
        {
            if(b[k]%b[i]!=0&&b[k]!=b[i])
            {
                printf("%d ",b[k]);
                k++;
            }
        }
    return 0;
}