#include <stdio.h>
int main()
{
    int leap;
    printf("enter the year");
    scanf("%d", &leap);
    if ((leap % 4 == 0 && leap % 100 != 0) || leap % 400 == 0)
        printf("%d is leap year", leap);
    else
        printf("%d is not a leap year", leap);
    
    return 0;
}