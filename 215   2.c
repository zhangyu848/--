#include<stdio.h>
#include<math.h>
void aaa(int a,int b, int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    aaa(a,b,c);
    return 0;
}
void aaa(int a,int b, int c){
    int x;
    a*x*x+b*x+c=0;
    if(pow(b,2)-4*a*c>0){
        printf("%d",x);
    }
    else if(pow(b,2)-4*a*c==0){
        printf("%d",x);
    }
    else{
        printf("wu geng");
    }
}