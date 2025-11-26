#include<stdio.h>
#include<math.h>
int sum=0;
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j]=0;
        }
    }  
    for(int i=0; i<pow(n,2); i++)
    {
        sum+=i+1;
    }
     
    return 0;
}