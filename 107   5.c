#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    if(t<1||t>1000){
        printf("qing chong xin shu ru");
        return 1;
    }
    double x=pow(t,1.0/2);
    printf("%f\n", x);
    return 0;
}