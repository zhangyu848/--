#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=90)
    putchar('A');
    else if(a>=80)
    putchar('B');
    else if(a>=70)
    putchar('C');
    else if(a>=60)
    putchar('D');
    else
    putchar('E');
    return 0;
}