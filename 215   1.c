#include<stdio.h>
int mmm(int a,int b);
int nnn(int a,int b);
int main()
{
    int a,b;
    int i;
    scanf("%d%d",&a,&b);
    printf("%d\n", mmm(a,b));
    printf("%d\n", nnn(a,b));
    return 0;
}
int mmm(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
        }
    }
}
int nnn(int a,int b)
{
    int i;
    for(i=a>b?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
}