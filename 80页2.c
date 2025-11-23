#include <stdio.h>
#include <math.h>
int main() {
    int a=1000;
    double r1=1.5/100.0,n=5;
    double p1,p2,p3,p4,p5;
    p1=a*(1+n*r1);
    printf("p1=%.2f\n",p1);
    double m;
    m=a*(1+2*2.1/100.0);
    p2=m*(1+3*2.75/100.0);
    printf("p2=%.2f\n",p2);
    double b;
    b=a*(1+3*2.1/100.0);
    p3=b*(1+2*2.75/100.0);
    printf("p3=%.2f\n",p3);
    p4=a*pow((1+1.5/100.0),5);
    printf("p4=%.2f\n",p4);
    p5=a*pow((1+0.35/(100*4)),5*4);
    printf("p5=%.2f\n",p5);
    return 0;
}