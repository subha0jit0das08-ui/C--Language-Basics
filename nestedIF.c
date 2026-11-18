#include <stdio.h>
int main()
{
    int num1;
    printf("enter a number");
    scanf("%d", &num1);
    if (num1 % 5 == 0 && num1 % 11 == 0)
        printf("%d is divisible by 5 and 11", &num1);
    else
    {
        printf("it is not divisible by 5 and 11 at the same time");
    }
}