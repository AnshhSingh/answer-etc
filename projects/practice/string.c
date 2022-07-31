#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    char *ptr=s;
    scanf("%s", &s);
     printf("Hello, World!");
    while (*ptr!='\0')
    {

        printf("%c",*ptr);
        ptr++;
    }
    
    
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
