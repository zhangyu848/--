#include<stdio.h>
#include<math.h>
int main(){
    double m,n;
    m=log (6000)-log(6000-300000*0.01);
    n=log(1+0.01);
    m/=n;
    printf("%.1f\n",m); 
    return 0;
}