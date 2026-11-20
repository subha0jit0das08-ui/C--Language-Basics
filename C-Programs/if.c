#include <stdio.h>
int main()
{
    int Num1, Num2;
    printf("enter the values");
    scanf("%d%d", &Num1, &Num2);
    if (Num1 > Num2)
    {
        printf("%d is greater than %d", Num1, Num2);
    }
    else if (Num1 == Num2)
        printf("%d and %d are same", Num1, Num2);
    else
    {
        printf("%dis less than %d", Num1, Num2);
    }
    return 0;
}