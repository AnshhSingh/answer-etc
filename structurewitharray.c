#include<stdio.h>
#include<string.h>
    struct employee
    {
        int code;
        float salary;
        char name[10];
    };
int main(){

    
    int a;
    struct employee hari={100,50,"hari"};
    printf("code%d",hari.code);
    
    return 0;
}