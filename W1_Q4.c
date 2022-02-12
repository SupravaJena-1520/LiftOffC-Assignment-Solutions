#include<stdio.h>

int main()
{
    int a,b;
    int ch;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1	:
        printf("Sum of Two Numbers is :%d",a+b);
        break;
    case 2	:
        printf("Difference of Two Numbers is :%d",a-b);
        break;
    case 3	:
        printf("Multiplication of Two Numbers is :%d",a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is :%d",a/b);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}