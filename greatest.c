#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("enter num1");
    scanf("%d", &num1);
    printf("enter num2");
    scanf("%d", &num2);
    printf("enter num3");
    scanf("%d", &num3);
    printf("enter num4");
    scanf("%d", &num4);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("num 1 is greatest");
            }
            else
            {
                printf("num 4 is greatest");
            }
        }
    }
    else if (num2 > num3)
    {
        if (num2>num4){
            printf("num 2 is greatest");
        }
        else {
            printf("num 4 is greatest");
        }
    }
    else if(num3>num4){
        printf("num 3 is greatest");
    }
    else {
        printf("num 4 is greatest"); 
    }
    return 0;
}