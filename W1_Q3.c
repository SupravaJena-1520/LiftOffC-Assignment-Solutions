#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter any number to check whether it is even or odd:");
    scanf("%d", &n);
    m=n%2;
    switch(m)
    {
        case 0: 
            printf("Number is Even");
            break;
        case 1: 
            printf("Number is Odd");
            break;
    }
    return 0;
}