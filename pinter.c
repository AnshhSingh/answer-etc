#include<stdio.h>
int ten(int x)
{
 x=x*10;
 return 0;
}
int main(){
    int b=9;
    ten(b);
    printf("%d",b);
    return 0;
}