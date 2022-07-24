#include<stdio.h>
int pass(int a);
int main(){
    int i=4;
    int *point;
    //point=&i;
    printf("%u\n",&i);
    pass(i);
    return 0;
}
int pass(int a)
{
printf("%u",&a);
}