#include<stdio.h>
int main()
{
    int a[10];
    int i,j=0;
    int n=10;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
    for(i=0;i<n;i++){
        int k;
        if(a[i]>a[i+1])
        {
            k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }
    }
    n--;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}