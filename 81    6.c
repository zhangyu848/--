#include<stdio.h>
int main()
{
    char str[7]={'I','n','d','i','a','\0'};
    int i;
    for(i=0;str[i]!='\0';i++){
    printf("%c",str[i]+4);
    
    }
    printf("\n");
    for(i=0;str[i]!='\0';i++){
    putchar(str[i]+4);
    }
    return 0;
}