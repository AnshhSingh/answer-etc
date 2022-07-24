#include<stdio.h>
int main(){
    int a;
    a=0;
     int *b;
     b=&a;
    printf("%u\n",b);
    printf("%d",*b);

    return 0;
}