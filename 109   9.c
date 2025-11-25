#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int i;
    scanf("%d",&a);
    int x=a;
    for(i=0;a>0;i++)
    {
        int b=a%10;
        a=a/10;
        printf("%d",b);
    }
    printf("\n");
    printf("%d\n",i);
    for(i;i>0;i--)
    {
        int y=pow(10,i-1);
        if(i==1)
        y=1;
        int c=x/y;
        x=x-c*y;
        printf("%d",c);
    }
    return 0;
}