#include <stdio.h>
int main()
{
    int mark1, mark2, mark3;
    float total;
    printf("enter marks 1\n");
    scanf("%d", &mark1);

    printf("enter marks 2\n");
    scanf("%d", &mark2);

    printf("enter marks 3\n");
    scanf("%d", &mark3);
    
    total = (mark1 + mark2 + mark3) / 3;
    if (mark1 < 33 || mark2 < 33 || mark3 < 33 || (total < 40))

    {
        printf("fail");
    }
    else
    {
        printf("pass");
    }

    return 0;
}