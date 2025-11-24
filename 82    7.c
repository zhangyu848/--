#include<stdio.h>
#include<math.h>
int main()
{
    int r=5,h=3;
    double pai=3.14;
    printf("yuan zhou chang=%.2f\n",2*pai*r);
    printf("yuan mian ji=%.2f\n",pow(r,2)*pai);
    printf("yuan zhu ti ji=%.2f\n",pai*pow(r,2)*h);
    printf("yuan qiu biao mian ji=%.2f\n",4.0*pai*pow(r,2));
    printf("yuan qiu ti jig=%.2f\n",(4.0/3)*pai*pow(r,3));
    printf("yuan zhu ti ji=%.2f\n",pai*pow(r,2)*h);
    return 0;
}