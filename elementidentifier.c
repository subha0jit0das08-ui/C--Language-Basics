#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter any digit or character ");
    scanf("%c", &ch);
    if (isupper(ch))
    {
        printf("%c is uppercase", ch);
    }
    else if (islower(ch))
    {
        printf("%c is lowercase", ch);
    }
    else if (isdigit(ch))
    {
        printf("%c is a digit", ch);
    }

    else
    {
        printf("%c is a special character", ch);
    }
}