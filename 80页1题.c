#include <stdio.h>
#include <math.h>
int main() {
    double n, r, p;
    r=0.07;
    n=10;
    p=pow(1+r, n);
    printf("%.1f\n", p*100);
    return 0;
}