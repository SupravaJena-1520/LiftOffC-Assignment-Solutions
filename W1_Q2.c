#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d%d", &n1, &n2);
    if(n1 > n2)
        printf("%d is maximum", n1);        
    else
        printf("%d is maximum", n2);
    return 0;
}