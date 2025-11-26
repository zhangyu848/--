#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j,k,l;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++){
                if(a[i][j]<=a[k][j])
                    continue;
            else{
                    for(l=0;l<n;l++){
                        if(a[i][j]<=a[i][l])
                            break;
                    }
                }            
            }
            }
            printf("%d ",a[i][j]);
        }
    return 0;
}