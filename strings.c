#include <stdio.h>
int main()
{
    // char str[] = {'a','n','s','h','\0'};
    char str[] = "ansh";
    printf("%s", &str);
    // char *ptr=&str[0];
    //  for (int i = 0; i < 4; i++)
    // {
    //     printf("%c",*ptr);
    //     ptr++;
    // }

    return 0;
}